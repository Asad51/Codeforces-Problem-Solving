#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main(int argc, char const *argv[])
{
    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;
    int frequency[125] = {0};

    for (int i = 0; i < str.size(); i++)
    {
        int tmp = str[i];
        frequency[tmp]++;
    }

    int c = 0, t = 0;
    for (int i = 'a'; i <= 'z'; i++)
    {
        if (frequency[i])
        {
            t += i - 96;
            i++;
            c++;
        }
        if (c == k)
        {
            cout << t << "\n";
            return 0;
        }
    }
    cout << -1 << "\n";
    return 0;
}
