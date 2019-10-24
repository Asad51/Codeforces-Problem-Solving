//Codeforces - 750A - New Year and Hurry

#include "bits/stdc++.h"
using namespace std;

int main(int argc, char const *argv[])
{
    int n, k, total_time = 240, count = 0;
    cin >> n >> k;
    total_time = total_time - k;
    for (int i = 1; i <= n; i++)
    {
        total_time = total_time - i * 5;
        if (total_time < 0)
        {
            break;
        }
        count++;
    }
    cout << count << endl;
    return 0;
}
