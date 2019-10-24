#include <stdio.h>
#define MAX_CHILD 3
#define MAX_CHAR 600001

struct TrieNode
{
    bool isLeaf;
    TrieNode *nodes[MAX_CHILD];
    TrieNode()
    {
        isLeaf = false;
        for (int i = 0; i < MAX_CHILD; i++)
            nodes[i] = NULL;
    }
};

class Trie
{
    TrieNode *rootNode;

public:
    Trie()
    {
        rootNode = new TrieNode();
    }

    void insertString(char inputString[MAX_CHAR])
    {
        TrieNode *tmp = rootNode;
        int i = 0;
        while (inputString[i])
        {
            int index = inputString[i++] - 'a';
            if (!tmp->nodes[index])
                tmp->nodes[index] = new TrieNode();
            tmp = tmp->nodes[index];
        }
        tmp->isLeaf = true;
    }

    bool canFind(TrieNode *root, char searchString[MAX_CHAR], int i, int countDiff)
    {
        if (!searchString[i])
        {
            if (root->isLeaf && countDiff == 1)
                return true;
            return false;
        }

        bool isFound = false;
        int index = searchString[i] - 'a';
        for (int j = 0; j < MAX_CHILD; j++)
        {
            if (!root->nodes[j])
                continue;

            if (j == index)
                isFound = isFound || canFind(root->nodes[j], searchString, i + 1, countDiff);
            else if (!countDiff)
            {
                isFound = isFound || canFind(root->nodes[j], searchString, i + 1, countDiff + 1);
            }

            if (isFound)
                return true;
        }
        return isFound;
    }

    bool isFoundRequiredString(char searchString[MAX_CHAR])
    {
        return canFind(rootNode, searchString, 0, 0);
    }

    ~Trie()
    {
        delete (rootNode);
    }
};

int main(int argc, char const *argv[])
{
    int n, m;
    char str[MAX_CHAR];
    Trie *trie = new Trie();

    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", str);
        trie->insertString(str);
    }

    for (int i = 0; i < m; i++)
    {
        scanf("%s", str);
        if (trie->isFoundRequiredString(str))
            printf("YES\n");
        else
            printf("NO\n");
    }

    delete (trie);
    return 0;
}
