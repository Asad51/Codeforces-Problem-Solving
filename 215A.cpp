#include "bits/stdc++.h"
using namespace std;

int main(int argc, char const *argv[])
{
    int n, m, a, count = 0, max_ratio = 0, ratio;
    vector<int> padel, rear;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        padel.push_back(a);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> a;
        rear.push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((rear[j] % padel[i] == 0))
            {
                ratio = rear[j] / padel[i];
                if (ratio > max_ratio)
                {
                    count = 1;
                    max_ratio = ratio;
                }
                else if (ratio == max_ratio)
                {
                    count++;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}
