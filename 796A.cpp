#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main()
{
    lli n, m, k, a;
    lli cost, dist, dist1, mini;
    vector<lli> v;
    while (cin >> n >> m >> k)
    {
        mini = INT_MAX;
        dist = 0;
        dist1 = 0;
        for (lli i = 0; i < n; i++)
        {
            cin >> a;
            v.push_back(a);
        }
        for (lli i = m - 2; i >= 0; i--)
        {
            cost = v[i];
            dist = dist + 10;
            if (cost <= k && cost > 0)
            {
                mini = min(mini, dist);
                break;
            }
            //cout<<dist<<endl;
        }
        //cout<<dist<<endl;
        for (int i = m; i < n; i++)
        {
            dist1 = dist1 + 10;
            cost = v[i];
            if (cost <= k && cost > 0)
            {
                mini = min(mini, dist1);
                //cout<<mini<<endl;
                break;
            }
            //cout<<dist1<<endl;;
        }

        cout << mini << endl;
        v.clear();
    }

    return 0;
}
