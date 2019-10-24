#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, p, pr, pl;

    while (cin >> n)
    {
        char s[n], t[n];
        cin >> s;
        if (n % 2 == 1)
        {
            p = n / 2;
            pl = p - 1;
            pr = p + 1;
            t[p] = s[0];
            for (i = 1; i < n; i++)
            {
                if (i % 2 == 1)
                {
                    t[pl] = s[i];
                    pl--;
                }
                else
                {
                    t[pr] = s[i];
                    pr++;
                }
            }
        }
        else
        {
            p = n / 2 - 1;
            pr = p + 1;
            pl = p - 1;
            t[p] = s[0];
            for (i = 1; i < n; i++)
            {
                if (i % 2 == 1)
                {
                    t[pr] = s[i];
                    pr++;
                }
                else
                {
                    t[pl] = s[i];
                    pl--;
                }
            }
        }
        for (i = 0; i < n; i++)
        {
            cout << t[i];
        }
        cout << endl;
    }
    return 0;
}
