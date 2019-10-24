#include "bits/stdc++.h"
using namespace std;

typedef long long int lli;

int main(int argc, char const *argv[])
{
    lli n, t, tim, cons_time = 0, max_book = 0, count = 0, sum;
    vector<lli> a;
    cin >> n >> t;
    lli tmp = t;
    while (n--)
    {
        cin >> tim;
        cons_time += tim;
        a.push_back(cons_time);
    }
    for (lli i = 0; i < a.size() - max_book; i++)
    {
        sum = 0;
        if (i != 0)
        {
            tmp = a[i - 1];
        }
        else
        {
            tmp = 0;
        }
        count = (upper_bound(a.begin(), a.end(), tmp + t) - a.begin()) - i;
        max_book = max(max_book, count);
    }

    cout << max_book << endl;
    return 0;
}
