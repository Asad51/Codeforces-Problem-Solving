#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;
    int c[n], a[m];
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    int mx = 0;
    for (int i = 0, j = 0; i < n && j < m; i++)
    {
        if (a[j] >= c[i])
        {
            j++;
            mx++;
        }
    }
    cout << mx << "\n";
    return 0;
}
