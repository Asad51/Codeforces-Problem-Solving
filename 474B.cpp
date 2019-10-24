//Codeforces - 474B - Worms

#include "bits/stdc++.h"
using namespace std;

typedef long int li;

int main(int argc, char const *argv[])
{
    li n, m, label, juicy_label, consecutive = 0;
    cin >> n;
    vector<long> a, q, res;
    for (li i = 0; i < n; i++)
    {
        cin >> label;
        consecutive = consecutive + label;
        a.push_back(consecutive);
    }

    cin >> m;
    for (li i = 0; i < m; i++)
    {
        cin >> juicy_label;
        li start = 0, end = a.size() - 1;
        li mid;
        li index;
        while (start <= end)
        {
            mid = (start + end) / 2;
            if (juicy_label <= a[mid])
            {
                index = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }

        res.push_back(index + 1);
    }

    for (li i = 0; i < res.size(); i++)
    {
        cout << res[i] << endl;
    }
    return 0;
}
