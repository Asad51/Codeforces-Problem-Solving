#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s;
    cin >> t;
    int i, n, c = 0;
    n = s.size() - 1;
    for (i = n; i >= 0; i--)
    {
        if (s[i] == t[n - i])
            c = 1;
        else
        {
            c = 0;
            break;
        }
    }
    if (c == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
