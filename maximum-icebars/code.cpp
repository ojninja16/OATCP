#include <bits/stdc++.h>
typedef long long ll;
/*const ll xz = 1e7 + 10;
ll fact[xz];
ll no[xz];*/
const ll mod = 1e9 + 7;
using namespace std;

ll solve(vector<ll> &costs, ll coins)
{

    sort(costs.begin(), costs.end());
    ll ans = 0;
    for (ll cc : costs)
    {
        if (coins >= cc)
        {
            coins -= cc;
            ans++;
            continue;
        }
        break;
    }
    return ans;
}

int main()
{
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);

    ll n;
    cin >> n;

    vector<ll> costs(n);
    ll x;
    for (int i = 0; i < n; i++)
    {
        cin >> costs[i];
    }

    ll coins;
    cin >> coins;
    ll res = solve(costs, coins);
    cout << res << endl;
    fclose(stdin);
    fclose(stdout);
}