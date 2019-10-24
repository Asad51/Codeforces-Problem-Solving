#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
#define E 0.00000000001

double findWeight(int co, double w)
{
    double ww = 0.0;
    double c = co, w2 = w;
    while (w2 > E)
    {
        ww += w2 / c;
        w2 = w2 / c;
    }
    return ww;
}

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;
    int a[n], b[n], co[2 * n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    double tot = m;
    int k = 0;
    co[k++] = b[0];
    for (int i = n - 1; i > 0; i--)
    {
        co[k++] = a[i];
        co[k++] = b[i];
    }
    co[k++] = a[0];

    for (int i = 0; i < k; i++)
    {
        if (co[i] == 1)
        {
            printf("-1\n");
            return 0;
        }
        tot += findWeight(co[i], tot);
    }

    printf("%.10lf\n", tot - m);
    return 0;
}
