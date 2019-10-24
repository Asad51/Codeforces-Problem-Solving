#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main(int argc, char const *argv[])
{
    lli n;
    cin >> n;
    if (!n)
    {
        cout << 0 << endl;
        return 0;
    }
    if (n % 2 == 0)
    {
        cout << n + 1 << endl;
    }
    else
        cout << (n + 1) / 2 << endl;
    return 0;
}
