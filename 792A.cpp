#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main()
{
    lli n, a, b, mini, c;
    vector<lli> myvec;
    vector<lli>::iterator it;
    while (cin >> n)
    {
        b = 0;
        c = 0;
        mini = INT_MAX;
        while (n--)
        {
            cin >> a;
            myvec.push_back(a);
        }

        sort(myvec.begin(), myvec.end());
        for (lli i = 1; i < myvec.size(); i++)
        {
            mini = min(mini, abs(myvec[i - 1] - myvec[i]));
        }
        for (lli i = 1; i < myvec.size(); i++)
        {
            if (abs(myvec[i - 1] - myvec[i]) == mini)
                c++;
        }

        cout << mini << " " << c << endl;

        myvec.clear();
    }

    return 0;
}
