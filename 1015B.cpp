#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    string s, t, s1, t1;
    cin >> s >> t;
    s1 = s;
    t1 = t;
    sort(s1.begin(), s1.end());
    sort(t1.begin(), t1.end());
    if (s == t)
    {
        printf("0\n");
        return 0;
    }
    if (s1 != t1)
    {
        printf("-1\n");
        return 0;
    }
    vector<lli> arr;
    //bool isPossible = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == t[i])
            continue;
        for (int j = i + 1; j < n; j++)
        {
            if (s[j] == t[i])
            {
                //int p = i;
                while (j > i)
                {
                    char ch = s[j];
                    s[j] = s[j - 1];
                    s[j - 1] = ch;
                    arr.push_back(j);
                    j--;
                }
                break;
            }
        }
    }
    printf("%ld\n", arr.size());
    for (int i = 0; i < arr.size(); i++)
        printf("%Ld ", arr[i]);
    printf("\n");
    return 0;
}
