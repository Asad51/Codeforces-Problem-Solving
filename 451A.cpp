#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, in, i, j;
    string winner;
    cin >> n >> m;
    in = m * n;
    i = 1;
    while (in != 0)
    {
        in = in - (n + m - 1);
        if (i % 2 == 1)
        {
            winner = "Akshat";
        }
        else
        {
            winner = "Malvika";
        }
        m--;
        n--;
        i++;
    }
    cout << winner << endl;

    return 0;
}
