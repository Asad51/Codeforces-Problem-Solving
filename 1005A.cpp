#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int a, b[n] = {0}, c = 0, k = 0, p = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == 1)
        {
            c++;
            if (p > 0)
            {
                b[k++] = p;
                p = 0;
            }
            p++;
        }
        else
        {
            p++;
        }
    }
    b[k++] = p;
    cout << c << "\n";
    for (int j = 0; j < k; j++)
    {
        if (j != 0)
            cout << " ";
        cout << b[j];
    }
    cout << "\n";
    return 0;
}
