#include <bits/stdc++.h>
typedef long long ll;
const ll mod = 1e9 + 7;
using namespace std;


bool static compare(ll a, ll b)
{
    string ptr = to_string(a), qtr = to_string(b);
    return ptr + qtr > qtr + ptr;
}
string solve(vector<ll> &nums)
{
    ll n = nums.size();
    sort(nums.begin(), nums.end(), compare);
    string ans;
    for (int i = 0; i < n; i++)
        ans += to_string(nums[i]);
    if (ans[0] == '0')
        return "0";
    return ans;
}
int main()
{

    freopen("input2.txt", "r", stdin);
    freopen("output2.txt", "w", stdout);

    ll n;

    vector<ll> v;
    while (cin >> n)
    {
        v.push_back(n);
    }
    string res = solve(v);
    cout << res << endl;
    fclose(stdin);
    fclose(stdout);
}