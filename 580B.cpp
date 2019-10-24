#include "bits/stdc++.h"
using namespace std;

typedef long long int lli;
typedef pair<lli, lli> pll;

int main(int argc, char const *argv[])
{
    lli n, d;
    lli s, m;
    cin >> n >> d;
    vector<pll> friends;
    vector<lli> money, factor;
    for (lli i = 0; i < n; i++)
    {
        cin >> m >> s;
        friends.push_back(pll(m, s));
    }

    sort(friends.begin(), friends.end());

    for (lli i = 0; i < friends.size(); i++)
    {
        money.push_back(friends[i].first);
        factor.push_back(friends[i].second);
    }

    lli max_factor = 0, tmp = 0, tmp_money, index = 0, cur_index = 0, diff = 0;

    for (lli i = 0; i < money.size(); i += index)
    {
        tmp = 0;
        tmp_money = money[i] + d - 1;

        cur_index = (upper_bound(money.begin(), money.end(), tmp_money) - money.begin()) - 1;
        diff = cur_index - i;
        index = (upper_bound(money.begin(), money.end(), money[i]) - money.begin()) - i;
        for (lli j = i; j <= cur_index; j++)
        {
            tmp = tmp + factor[j];
        }
        max_factor = max(max_factor, tmp);

        if (tmp_money >= money[money.size() - 1])
            break;
    }

    cout << max_factor << endl;
    return 0;
}
