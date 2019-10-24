#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, i, j;
    int g, t, c;
    cin >> n >> k;
    string s;
    cin >> s;
    for (i = 0; i < n; i++)
    {
        if (s[i] == 'G')
            g = i;
        else if (s[i] == 'T')
            t = i;
    }

    if (g < t)
    {
        for (i = g; i < t;)
        {
            i = i + k;
            if (s[i] == '#')
                break;
            if (i == t)
            {
                c = 1;
            }
            else
            {
                c = 0;
            }
        }
    }
    else
    {
        for (i = g; i > t;)
        {
            i = i - k;
            if (s[i] == '#')
                break;
            if (i == t)
            {
                c = 1;
            }
            else
            {
                c = 0;
            }
        }
    }

    if (c == 1)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}
