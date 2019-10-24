#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main(int argc, char const *argv[])
{
    lli n, m;
    cin >> n >> m;
    lli arr[n], cp[n];
    lli a1, a2;
    lli sz = 0, cs = 0;
    for (lli i = 0; i < n; i++)
    {
        cin >> a1 >> a2;
        sz += a1;
        cs += (a1 - a2);
        cp[i] = a1 - a2;
    }
    if ((sz - cs) > m)
    {
        printf("-1\n");
        return 0;
    }
    if (sz <= m)
    {
        printf("0\n");
        return 0;
    }

    sort(cp, cp + n);
    int c = 0;
    for (lli i = n - 1; i >= 0; i--)
    {
        sz -= cp[i];
        c++;
        if (sz <= m)
        {
            printf("%d\n", c);
            return 0;
        }
    }
    return 0;
}
