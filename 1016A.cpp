#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

template <typename T>
T func(T a, T b)
{
    return a + b;
}

int main(int argc, char const *argv[])
{
    lli n, m;
    cin >> n >> m;
    lli arr[n];
    lli res[n];
    for (lli i = 0; i < n; i++)
        cin >> arr[i];
    lli t, tr = 0;
    //cout<<n<<m<<endl;
    t = m;
    //cout<<t<<endl;
    for (lli i = 0; i < n;)
    {
        if (arr[i] < t)
        {
            t = t - arr[i];
            res[i++] = tr;
            tr = 0;
        }
        else
        {
            int tmp = (arr[i] - t) / m;
            if (tmp == 0)
                tmp = 1;
            t += m * tmp;
            tr += tmp;
        }
        //<<t<<endl;
    }
    for (lli i = 0; i < n; i++)
        cout << res[i] << " ";
    return 0;
}
