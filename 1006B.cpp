#include <bits/stdc++.h>
using namespace std;
typedef long long lli;

#define FOR(a, i, n) for (; i < n; i = i + a)
#define MOD 1000007

int main(int argc, char const *argv[])
{
    int n, k, i, j;
    cin >> n >> k;
    int a[n];
    vector<int> v, b;
    i = 0;
    FOR(1, i, n)
    {
        scanf("%d", &a[i]);
        v.push_back(a[i]);
    }
    sort(v.begin(), v.end());
    int prev = -1, mx = 0;
    i = 0;
    FOR(1, i, n)
    {
        j = 1;
        FOR(1, j, k + 1)
        {
            if (a[i] == v[n - j])
            {
                b.push_back(i - prev);
                prev = i;
                mx += a[i];
                v[n - j] = -1;
                break;
            }
        }
    }
    b[b.size() - 1] += n - prev - 1;
    printf("%d\n", mx);
    i = 0;
    FOR(1, i, b.size())
    {
        if (i != 0)
            printf(" ");
        printf("%d", b[i]);
    }

    v.clear();
    b.clear();
    return 0;
}
