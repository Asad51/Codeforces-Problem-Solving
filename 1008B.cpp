#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    ll w[n], h[n];
    ll mx = 0, a, b, tmn, tmx;
    bool isPossible = true;
    for (int i = 0; i < n; i++)
    {
        cin >> w[i] >> h[i];
    }
    mx = max(w[0], h[0]);
    for (int i = 1; i < n; i++)
    {
        tmn = min(w[i], h[i]);
        tmx = max(w[i], h[i]);
        if (mx >= tmx)
        {
            mx = tmx;
        }
        else if (mx >= tmn)
        {
            mx = tmn;
        }
        else
        {
            isPossible = false;
            break;
        }
    }
    if (isPossible)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
