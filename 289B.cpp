#include "bits/stdc++.h"
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, d, a, ans = 0;
    cin >> n >> m >> d;
    map<int, int> matrix;
    map<int, int>::iterator it;
    vector<int> index;
    bool isPossible = true;
    int prev = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a;
            if (prev != 0 && abs(prev - a) % d != 0)
            {
                isPossible = false;
            }
            prev = a;
            if (matrix.find(a) != matrix.end())
            {
                matrix[a]++;
            }
            else
            {
                matrix[a] = 1;
            }

            index.push_back(a);
        }
    }
    if (!isPossible)
    {
        cout << -1 << "\n";
        return 0;
    }

    sort(index.begin(), index.end());
    int in_size = index.size();
    int mid = in_size / 2;

    if (in_size % 2 == 1)
    {
        for (it = matrix.begin(); it != matrix.end(); ++it)
        {
            if (it->first != index[mid])
            {
                ans = ans + abs(it->first - index[mid]) / d * it->second;
            }
        }
    }
    else
    {
        for (it = matrix.begin(); it != matrix.end(); ++it)
        {
            if (it->first != index[mid])
            {
                ans = ans + abs(it->first - index[mid]) / d * it->second;
            }
        }

        if (index[mid] != index[mid - 1])
        {
            int tmp = 0;
            for (it = matrix.begin(); it != matrix.end(); ++it)
            {
                if (it->first != index[mid - 1])
                {
                    tmp = tmp + abs(it->first - index[mid - 1]) / d * it->second;
                }
            }
            ans = min(ans, tmp);
        }
    }

    cout << ans << "\n";

    return 0;
}
