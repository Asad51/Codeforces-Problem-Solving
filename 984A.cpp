#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main(int argc, char const *argv[])
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    lli n, num;
    cin >> n;
    vector<lli> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        a[i] = num;
    }

    sort(a.rbegin(), a.rend());
    cout << a[n / 2] << endl;
    return 0;
}
