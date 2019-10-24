#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, c = 0;
    string s;
    cin >> s;
    for (i = 0; i < s.size(); i++)
    {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
        {
            c = 1;
        }
    }
    if (c == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
