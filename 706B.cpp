/**Codeforces - 706B - Interesting drink**/
#include "bits/stdc++.h"
using namespace std;

typedef long long int lli;

int main(int argc, char const *argv[])
{
    lli n, q, price, spend;
    vector<lli> x, res;
    cin >> n;
    for (lli i = 0; i < n; i++)
    {
        cin >> price;
        x.push_back(price);
    }
    sort(x.begin(), x.end());
    cin >> q;
    for (lli i = 0; i < q; i++)
    {
        cin >> spend;
        res.push_back(upper_bound(x.begin(), x.end(), spend) - x.begin());
    }

    for (lli i = 0; i < res.size(); i++)
    {
        cout << res[i] << endl;
    }
    return 0;
}
