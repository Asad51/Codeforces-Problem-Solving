#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main(int argc, char const *argv[])
{
    lli arr[100001] = {0}, arr2[100001] = {0};
    lli n, x;
    cin >> n >> x;
    lli a[n];
    bool isPossible = false;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (arr[a[i]] > 0)
            isPossible = true;
        arr[a[i]]++;
        arr2[a[i]]++;
    }
    if (isPossible)
    {
        cout << 0 << "\n";
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        int p = a[i] & x;
        if (p != a[i] && arr[p] > 0)
        {
            printf("1\n");
            return 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        int p = a[i] & x;
        if (p != a[i] && arr2[p] > 0)
        {
            printf("2\n");
            return 0;
        }
        arr2[p]++;
        arr2[a[i]]--;
    }
    printf("-1\n");

    return 0;
}
