#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, x1, x2, t1, t2, p, d, i, j, e, mini, itime, ttime;
    while (cin >> s >> x1 >> x2)
    {
        cin >> t1 >> t2;
        cin >> p >> d;
        if (x1 < x2)
            e = 1;
        else
            e = -1;
        itime = fabs(x1 - x2) * t2;
        if ((d == 1 && e == 1 && p <= x1) || (d == -1 && e == -1 && p >= x1))
        {
            ttime = fabs(p - x2) * t1;
        }
        else if ((d == 1 && e == 1 && p > x1) || (d == -1 && e == -1 && p < x1))
        {
            if (d == 1 && e == 1)
            {
                ttime = s * t1 + abs(p - s) * t1 + x2 * t1;
            }
            else if (d == -1 && e == -1)
            {
                ttime = abs(s - x2) * t1 + s * t1 + p * t1;
            }
        }
        else
        {
            if (d == 1 && e == -1)
            {
                ttime = abs(p - s) * t1 + abs(s - x2) * t1;
            }
            else if (d == -1 && e == 1)
            {
                ttime = p * t1 + x2 * t1;
            }
        }
        mini = min(ttime, itime);
        cout << mini << endl;
    }
    return 0;
}
