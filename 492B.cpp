/**
 * Codeforces - 492B - Vanya and Lanterns
**/

#include "bits/stdc++.h"
using namespace std;

typedef long long int lli;

int main(int argc, char const *argv[])
{
    lli n, l, num;
    double radius = 0.0;
    cin >> n >> l;
    vector<lli> a;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        a.push_back(num);
    }

    sort(a.begin(), a.end());
    radius = a[0] - 0;
    for (lli i = 0; i < a.size() - 1; i++)
    {
        radius = max(radius, (double)(a[i + 1] - a[i]) / 2);
    }

    radius = max(radius, (double)(l - a[n - 1]));
    printf("%.10lf\n", radius);
    return 0;
}
