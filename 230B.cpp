#include "bits/stdc++.h"
using namespace std;

typedef long long int lli;

bool isPrime(lli n)
{
    bool isPrim = true;
    lli sq = sqrt(n);
    if (n % 2 == 0 && n > 2)
        isPrim = false;
    for (lli j = 3; j <= sq; j += 2)
    {
        if (n % j == 0)
        {
            isPrim = false;
        }
    }

    return isPrim;
}

int main(int argc, char const *argv[])
{
    lli n, a, count;
    vector<lli> nums;
    bool isTprime;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        nums.push_back(a);
    }

    for (int i = 0; i < n; i++)
    {
        isTprime = false;
        double aa = sqrt(nums[i]);
        lli bb = (lli)sqrt(nums[i]);

        if ((aa - bb == 0))
        {
            isTprime = isPrime(bb);
        }

        if (isTprime && nums[i] > 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
