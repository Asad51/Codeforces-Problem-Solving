#include <bits/stdc++.h>
using namespace std;

bool isLucky(int a)
{
    int p;
    while (a != 0)
    {
        p = a % 10;
        a = a / 10;
        if (p != 4 && p != 7)
            return false;
    }
    return true;
}

int main()
{
    int n, i, c = 0;
    cin >> n;
    for (i = 4; i <= n; i++)
    {
        if (isLucky(i) && n % i == 0)
        {
            c = 1;
        }
    }
    if (c == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
