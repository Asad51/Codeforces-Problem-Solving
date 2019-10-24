#include <bits/stdc++.h>
using namespace std;
typedef long long lli;

int main(int argc, char const *argv[])
{
    lli n;
    cin >> n;
    lli p[n];
    for (int i = 0; i < n; i++)
        cin >> p[i];
    lli i = 0, j = n - 1;
    lli a = 0, c = 0;
    lli mx = 0;
    while (j >= i)
    {
        if (a <= c)
        {
            if (a == c)
                mx = max(a, mx);
            a += p[i++];
        }
        else
            c += p[j--];
    }
    if (a == c)
        mx = max(a, mx);
    cout << mx << "\n";
    return 0;
}
