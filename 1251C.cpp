#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    freopen("00in.txt", "r", stdin);
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[300001];
        int odd[300001], even[300001], e = 0, o = 0;
        scanf("%s", s);
        for (int i = 0; s[i]; i++)
        {
            int n = s[i] - '0';
            if (n & 1)
                odd[o++] = n;
            else
                even[e++] = n;
        }

        int i = 0, j = 0;
        for (; i < o & j < e;)
        {
            if (odd[i] < even[j])
                printf("%d", odd[i++]);
            else
                printf("%d", even[j++]);
        }

        for (; i < o;)
            printf("%d", odd[i++]);
        for (; j < e;)
            printf("%d", even[j++]);
        printf("\n");
    }
    return 0;
}
