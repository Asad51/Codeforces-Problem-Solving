#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j = 0, k;
    string s;
    cin >> s;
    for (i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            j++;
    }
    if (j == s.size() || (s[0] >= 'a' && s[0] <= 'z' && j == s.size() - 1))
    {
        for (i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                s[i] = toupper(s[i]);
            else
                s[i] = tolower(s[i]);
        }
    }
    cout << s << endl;

    return 0;
}
