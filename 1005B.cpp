#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main(int argc, char const *argv[])
{
    string s, t;
    cin >> s >> t;
    int s1 = s.size();
    int s2 = t.size();
    int minMov, i, j;
    if (s == t)
        minMov = 0;
    else if (s == "" || t == "")
        minMov = max(s1, s2);
    else
    {
        for (i = s1 - 1, j = s2 - 1; i >= 0 && j >= 0; i--, j--)
        {
            if (s[i] != t[j])
            {
                minMov = i + j + 2;
                break;
            }
        }
        if (i < 0 || j < 0)
            minMov = max(i + 1, j + 1);
    }
    cout << minMov << "\n";
    return 0;
}
