#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main(int argc, char const *argv[])
{
    lli n;
    lli r, c;
    lli w, b;
    cin >> n;
    cin >> r >> c;
    w = max((r - 1), (c - 1));
    b = max((n - r), (n - c));
    if (w <= b)
    {
        cout << "White\n";
    }
    else
    {
        cout << "Black\n";
    }
    return 0;
}
