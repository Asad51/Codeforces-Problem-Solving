#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int hh, mm;
    int H, D, C, N, total_b, need_time, tmp;
    float total_c, tmp_c;

    cin >> hh >> mm;
    cin >> H >> D >> C >> N;

    total_b = ceil((float)H / N);

    total_c = C * total_b;

    if (hh < 20)
    {
        need_time = (20 * 60) - (hh * 60 + mm);
        tmp = need_time * D + H;

        total_b = ceil((float)tmp / N);
    }

    tmp_c = C * total_b;
    tmp_c = tmp_c - (tmp_c * 0.20);

    if (total_c > tmp_c)
    {
        total_c = tmp_c;
    }

    printf("%.4lf\n", total_c);

    return 0;
}
