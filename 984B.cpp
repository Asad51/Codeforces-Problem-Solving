#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main()
{
    map<int, int> pas;
    int n;
    cin >> n;
    int selected[2 * n] = {0};
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        pas.insert(make_pair(a, i));
    }
    vector<int> res;
    stack<int> s;
    char ch;
    map<int, int>::iterator it1 = pas.begin(), it2 = pas.end();
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> ch;
        if (ch == '0')
        {
            res.push_back(it1->second);
            //it2 = it1;
            if (it1 != it2)
                s.push(it1->second);
            it1++;
        }
        else
        {
            if (s.empty())
            {
                it2--;
                res.push_back(it2->second);
            }
            else
            {
                res.push_back(s.top());
                s.pop();
            }
        }
    }

    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    cout << "\n";
    return 0;
}
