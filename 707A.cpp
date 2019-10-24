#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, i, j;
    char a[100][100], c, check = 0;
    cin >> n >> m;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 'C' || a[i][j] == 'M' || a[i][j] == 'Y')
            {
                check = 1;
            }
        }
    }
    if (check == 1)
    {
        cout << "#Color" << endl;
    }
    else
    {
        cout << "#Black&White" << endl;
    }
    return 0;
}
