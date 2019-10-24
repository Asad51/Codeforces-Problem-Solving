#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main(int argc, char const *argv[])
{
    lli n, m, q;
    cin >> n >> m >> q;
    string s, t;
    cin >> s >> t;
    //cout<<s<<t<<endl;
    int pos[1001] = {0};
    int tp = 0;
    size_t found;
    do
    {
        found = s.find(t, tp);
        if (found != std::string::npos)
        {
            pos[found + 1] = 1;
            tp = found + 1;
            //cout<<found<<endl;
        }
    } while (found != std::string::npos);
    /*//cout<<s<<t<<endl;
	for(int i=1; i<1001; i++)
	{
		if(pos[i])
			cout<<pos[i]<<" ";
	}*/
    int l, r;
    for (int i = 0; i < q; i++)
    {
        cin >> l >> r;
        int c = 0;
        for (int j = l; j <= r; j++)
        {
            if (pos[j] && (j + t.size() - 1) <= r)
                c++;
        }
        cout << c << endl;
    }
    return 0;
}
