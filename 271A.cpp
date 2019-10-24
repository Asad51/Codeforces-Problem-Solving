#include <bits/stdc++.h>
using namespace std;

bool isDistinct(int y)
{
    int s = 0, i, j, c = 1, p, q[4];
    while (y != 0)
    {
        q[s] = y % 10;
        y = y / 10;
        s++;
    }
    for (i = 3; i > 0; i--)
    {
        for (j = i; j > 0; j--)
        {
            if (q[i] == q[j - 1])
            {
                c = 0;
                break;
            }
        }
    }

    if (c == 1)
        return true;
    else
        return false;
}

int main()
{
    int y, i;
    cin >> y;
    for (i = y + 1; i; i++)
    {
        if (isDistinct(i) == true)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
