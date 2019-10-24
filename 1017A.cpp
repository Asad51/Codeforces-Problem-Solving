#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

struct st
{
    lli num;
    lli id;
};

bool comp(st a, st b)
{
    if (a.num == b.num)
        return a.id < b.id;
    return a.num > b.num;
}

int main(int argc, char const *argv[])
{
    lli n, a, b, c, d;
    cin >> n;
    st stu[n];
    for (lli i = 0; i < n; i++)
    {
        cin >> a >> b >> c >> d;
        lli sum;
        sum = a + b + c + d;
        stu[i].num = sum;
        stu[i].id = i + 1;
    }
    sort(stu, stu + n, comp);
    for (lli i = 0; i < n; i++)
    {
        if (stu[i].id == 1)
            printf("%Ld\n", i + 1);
    }
    return 0;
}
