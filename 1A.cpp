#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, m, a, i, j, c;

    cin >> n >> m >> a;
    i = ceil((double)n / a);
    j = ceil((double)m / a);
    c = i * j;
    cout << c << endl;
    return 0;
}
