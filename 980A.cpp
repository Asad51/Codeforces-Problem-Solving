#include "bits/stdc++.h"
using namespace std;

int main(int argc, char const *argv[])
{
    string nec;
    cin >> nec;
    int pearls = 0, links = 0;
    for (int i = 0; i < nec.size(); i++)
    {
        if (nec[i] == '-')
            links++;
        else
            pearls++;
    }
    if (pearls == 0 || (links % pearls) == 0)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}
