#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    ll nums[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    sort(nums, nums + n);
    int c = 0, j = n - 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (nums[i] < nums[j])
        {
            c++;
            j--;
        }
    }
    cout << c << "\n";
    return 0;
}
