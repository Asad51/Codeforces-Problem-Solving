#include <stdio.h>
#include <iostream>
using namespace std;

typedef long long int lli;

struct Operation
{
    lli l, r, d;
};

int main(int argc, char const *argv[])
{
    lli n, m, k, x, y;
    cin >> n >> m >> k;
    lli arr[n], cnt[n + 1], opsCount[m + 1];
    Operation ops[m];

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i <= n; i++)
        cnt[i] = 0;

    for (int i = 0; i < m; i++)
        cin >> ops[i].l >> ops[i].r >> ops[i].d;
    for (int i = 0; i <= m; i++)
        opsCount[i] = 0;

    for (int i = 0; i < k; i++)
    {
        cin >> x >> y;
        opsCount[x - 1]++;
        opsCount[y]--;
    }

    lli prevOps = 0;
    for (int j = 0; j < m; j++)
    {
        prevOps += opsCount[j];
        lli tmp = prevOps * ops[j].d;
        cnt[ops[j].l - 1] += tmp;
        cnt[ops[j].r] -= tmp;
    }

    lli prev = 0;
    for (int i = 0; i < n; i++)
    {
        if (i)
            cout << " ";
        prev += cnt[i];
        cout << arr[i] + prev;
    }
    cout << "\n";

    return 0;
}
