#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, sum, i, j, maxi;
    while (cin >> a >> b >> c)
    {
        maxi = 0;
        for (i = 1; i <= a; i++)
        {
            sum = 0;
            if ((i * 2 <= b) && (i * 4 <= c))
            {
                sum = sum + i + i * 2 + i * 4;
                maxi = max(maxi, sum);
            }
            else
                break;
        }
        cout << maxi << endl;
    }
    return 0;
}
