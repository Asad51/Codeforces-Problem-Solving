#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[501];
        scanf("%s", s);
        int appear[26];
        for (int i = 0; i < 26; i++)
            appear[i] = 0;
        for (int i = 0; s[i]; i++)
        {
            int j = s[i] - 'a';
            if (appear[j] != 1)
            {
                if (s[i + 1] && s[i] == s[i + 1])
                {
                    appear[j] = -1;
                    i++;
                }
                else
                    appear[j] = 1;
            }
        }
        for (int i = 0; i < 26; i++)
        {
            if (appear[i] == 1)
                printf("%c", i + 'a');
        }
        printf("\n");
    }
    return 0;
}
