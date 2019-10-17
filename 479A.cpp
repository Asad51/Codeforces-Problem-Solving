#include <cstdio>

int max(int a, int b)
{
    if (a > b)
        return a;
    return b;
}

int main(int argc, char const *argv[])
{
    int a, b, c, tmp, result;
    scanf("%d %d %d", &a, &b, &c);
    result = a + b + c;
    result = max(result, (a + b) * c);
    result = max(result, a + b * c);
    result = max(result, a * b + c);
    result = max(result, a * (b + c));
    result = max(result, a * b * c);
    printf("%d\n", result);
    return 0;
}
