#include <bits/stdc++.h>
using namespace std;
typedef long long lli;

#define FOR(a, i, n) for (; i < n; i = i + a)
#define MOD 1000007

int main(int argc, char const *argv[])
{
    int n, i;
    cin >> n;
    lli a[n];
    i = 0;
    FOR(1, i, n)
    scanf("%Ld", &a[i]);
    i = 0;
    FOR(1, i, n)
    {
        if (i != 0)
            printf(" ");
        if (a[i] % 2 == 0)
            printf("%Ld", a[i] - 1);
        else
            printf("%Ld", a[i]);
    }
    return 0;
}
