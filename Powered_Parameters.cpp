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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < 31; j++)
            {
                int x = pow(v[i], j);
                cout << x << " ";
                if (x <= v[i])
                    ans++;
                else
                    break;
            }
            cout << endl;
        }
        cout << ans << endl;
    }
}