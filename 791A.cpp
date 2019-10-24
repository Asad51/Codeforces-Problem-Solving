#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main()
{
    lli a, b;
    while (cin >> a >> b)
    {
        lli x = a, y = b;
        for (lli i = 1;; i++)
        {
            x = 3 * x;
            y = 2 * y;
            if (x > y)
            {
                cout << i << endl;
                break;
            }
        }
    }
}
