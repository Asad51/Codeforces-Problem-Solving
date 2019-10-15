#include <cstdio>
#define MX 5

int main()
{
    //freopen("in.txt", "r", stdin);
    int num, n, m = 0, a[MX];
    for (int i = 0; i < MX; i++)
        a[i] = 0;
    scanf("%d\n", &n);
    while (n--)
    {
        scanf("%d", &num);
        a[num]++;
    }

    m += a[4];
    m += a[3];
    if (a[3] > a[1])
        a[1] = 0;
    else
        a[1] -= a[3];

    if (a[2] % 2 == 1)
        a[1] += 2;
    m += a[2] / 2;

    if (a[1] % 4 != 0)
        m++;
    m += a[1] / 4;

    printf("%d\n", m);
    return 0;
}