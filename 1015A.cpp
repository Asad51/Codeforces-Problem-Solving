#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main(int argc, char const *argv[])
{
    lli n, m;
    cin >> n >> m;
    lli arr[m + 1] = {0};
    lli l, r;
    lli c = 0;
    for (lli i = 0; i < n; i++)
    {
        cin >> l >> r;
        for (lli j = min(l, r); j <= max(l, r); j++)
        {
            arr[j] = 1;
        }
    }

    for (lli i = 1; i <= m; i++)
    {
        if (arr[i] == 0)
            c++;
    }

    cout << c << endl;
    for (lli i = 1; i <= m; i++)
    {
        if (arr[i] == 0)
            cout << i << " ";
    }
    cout << "\n";
    return 0;
}
