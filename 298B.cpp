#include "bits/stdc++.h"
using namespace std;

int main(int argc, char const *argv[])
{
    long long int t, sx, sy, ex, ey, x, y, count = 0;
    char ch;
    vector<char> Dir;
    cin >> t >> sx >> sy >> ex >> ey;
    x = sx;
    y = sy;
    for (int i = 0; i < t; i++)
    {
        cin >> ch;
        Dir.push_back(ch);
    }

    for (int i = 0; i < t; i++)
    {
        count++;
        if (Dir[i] == 'E' && ex > x)
        {
            x = x + 1;
        }
        else if (Dir[i] == 'W' && ex < x)
        {
            x = x - 1;
        }
        else if (Dir[i] == 'S' && ey < y)
        {
            y = y - 1;
        }
        else if (Dir[i] == 'N' && ey > y)
        {
            y = y + 1;
        }
        if (x == ex && y == ey)
        {
            break;
        }
    }

    if (count <= t && x == ex && y == ey)
    {
        cout << count << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}
