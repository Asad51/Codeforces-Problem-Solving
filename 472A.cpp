#include <bits/stdc++.h>
using namespace std;

bool isComposite(long long int n)
{
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            return true;
    }
    return false;
}

int main()
{
    long long int n, i, j;
    cin >> n;
    for (i = 4; i < n; i++)
    {
        j = n - i;
        if (isComposite(i) && isComposite(j))
        {
            cout << i << " " << j << endl;
            break;
        }
    }
    return 0;
}
