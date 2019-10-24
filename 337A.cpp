#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, i, mini;
    cin >> n >> m;
    int a[m];
    for (i = 0; i < m; i++)
        cin >> a[i];
    sort(a, a + m);

    mini = INT_MAX;
    for (i = 0; i <= m - n; i++)
    {
        if ((a[i + n - 1] - a[i]) < mini)
            mini = a[i + n - 1] - a[i];
    }
    cout << mini << endl;

    return 0;
}
