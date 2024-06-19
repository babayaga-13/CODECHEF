#include <bits/stdc++.h>
using namespace std;
#define int long long

using vi = vector<int>;

const int N = 1e6 + 2;

vector<int> vec;
vector<int> x(N, 0);

void seive()
{
    x[1] = 1;
    for (int i = 2; i < N; i++)
    {
        if (x[i] == 0)
        {
            x[i] = i;
            vec.push_back(i);
            for (int j = i * i; j < N; j += i)
                if (x[j] == 0)
                    x[j] = i;
        }
    }
}

signed main()
{
    seive();
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        int ans_sum = 0;
        if (x[k] == k)
            for (int i = 0; i < vec.size() && vec[i] <= k; i++)
                ans_sum += vec[i] * k;
        else
            for (int i = 0; i < vec.size() && vec[i] <= x[k]; i++)
                ans_sum += vec[i] * k;
        cout << ans_sum << '\n';
    }
    return 0;
}
