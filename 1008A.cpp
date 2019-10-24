#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isConsonent(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        return false;
    return true;
}

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n - 1; i++)
    {
        if ((isConsonent(s[i]) && s[i] != 'n') && isConsonent(s[i + 1]))
        {
            printf("NO\n");
            return 0;
        }
    }
    if (isConsonent(s[n - 1]) && s[n - 1] != 'n')
        printf("NO\n");
    else
        printf("YES\n");
    return 0;
}
