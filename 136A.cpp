#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, temp;
    cin >> n;
    int p[n + 1], q[n + 1];
    for (i = 1; i <= n; i++)
    {
        cin >> p[i];
    }

    for (i = 1; i <= n; i++)
    {
        j = i;
        temp = p[i];
        q[temp] = j;
    }
    for (i = 1; i <= n; i++)
        cout << q[i] << " ";
    cout << endl;

    return 0;
}
