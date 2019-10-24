#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;
    map<int, int> tp;
    map<int, int>::iterator it;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
        tp[a[i]]++;
    }

    if (m < n)
    {
        cout << 0 << "\n";
        return 0;
    }

    int mx = m / n, p;
    for (int i = mx; i > 0; i--)
    {
        int tmp = 0;
        for (it = tp.begin(); it != tp.end(); ++it)
        {
            int tpp = it->second;
            tmp += tpp / i;
        }
        if (tmp >= n)
        {
            p = i;
            break;
        }
    }

    cout << p << "\n";

    return 0;
}
