#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main()
{
    lli n, i, a, c = 1, maxi = 1;
    cin >> n;
    vector<lli> v;
    for (i = 1; i <= n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    for (i = 0; i < n - 1; i++)
    {
        if (v[i] <= v[i + 1])
        {
            c++;
            if (c > maxi)
                maxi = c;
        }
        else
            c = 1;
    }
    cout << maxi << endl;

    return 0;
}
