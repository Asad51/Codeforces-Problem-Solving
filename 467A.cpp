#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, c = 0;
    cin >> n;
    int p[n], q[n];
    for (i = 0; i < n; i++)
    {
        cin >> p[i] >> q[i];
        if ((q[i] - p[i] >= 2))
            c++;
    }
    cout << c << endl;

    return 0;
}
