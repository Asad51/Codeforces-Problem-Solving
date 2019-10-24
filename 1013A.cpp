#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main(int argc, char const *argv[])
{
    lli n;
    cin >> n;
    lli x, y, a = 0, b = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a += x;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> y;
        b += y;
    }

    if (b <= a)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
