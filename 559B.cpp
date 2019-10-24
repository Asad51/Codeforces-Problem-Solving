#include <stdio.h>
#define MAX_CHAR 200001

char a[MAX_CHAR], b[MAX_CHAR];

bool strCmp(int l1, int r1, int l2, int r2)
{
    for (int i = l1, j = l2; i < r1; i++, j++)
        if (a[i] != b[j])
            return false;
    return true;
}

int strLen(char a[MAX_CHAR])
{
    int i = 0;
    while (a[i])
        i++;
    return i;
}

bool isEqual(int l1, int r1, int l2, int r2)
{
    if (strCmp(l1, r1, l2, r2))
        return true;
    if ((r1 - l1) % 2 == 1)
        return false;
    else
    {
        int m1 = (l1 + r1) / 2;
        int m2 = (l2 + r2) / 2;
        return (isEqual(l1, m1, l2, m2) && isEqual(m1, r1, m2, r2)) || (isEqual(l1, m1, m2, r2) && isEqual(m1, r1, l2, m2));
    }
}

int main(int argc, char const *argv[])
{
    scanf("%s %s", a, b);
    int len = strLen(a);
    if (isEqual(0, len, 0, len))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
