#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> v[i];
        ll ans = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j < 32; j++)
            {
                ll x = pow(v[i], j);
                if (x <= v[j] && j <= n)
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
}
