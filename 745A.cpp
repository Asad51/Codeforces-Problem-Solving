#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int i, j, c;
    char a, b;
    set<string> st;
    queue<char> q;
    while (cin >> s)
    {
        int t = s.size();
        for (i = 0; i < t; i++)
        {
            a = s[t - 1];
            for (j = t - 1; j >= 1; j--)
            {
                s[j] = s[j - 1];
            }
            s[0] = a;
            st.insert(s);
        }
        cout << st.size() << endl;
        st.clear();
    }
    return 0;
}
