#include <cstdio>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    if (n % 5 == 0)
        printf("%d\n", n / 5);
    else
        printf("%d\n", n / 5 + 1);
    return 0;
}
