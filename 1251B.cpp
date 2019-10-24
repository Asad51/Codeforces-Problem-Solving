#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    //freopen("00in.txt", "r", stdin);
    int q;
    scanf("%d", &q);
    while (q--)
    {
        int n;
        scanf("%d", &n);
        int odd = 0, cnt[2] = {0, 0};
        for (int i = 0; i < n; i++)
        {
            char s[51];
            scanf("%s", s);
            int len = strlen(s);
            if (len & 1)
                odd++;
            for (int j = 0; j < len; j++)
                cnt[s[j] - '0']++;
        }

        if (cnt[0] % 2 == 0 && cnt[1] % 2 == 0 || odd)
            printf("%d\n", n);
        else
            printf("%d\n", n - 1);
    }
    return 0;
}
