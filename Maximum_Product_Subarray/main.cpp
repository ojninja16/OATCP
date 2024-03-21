#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define mod 1000000007
// const int N = 1e7+10;
// ll hsh[N];

int maximumProductSubarray(vector<int>&nums, int n) {
    int res = INT_MIN;
    int prod = 1;
    for (int i = 0; i < n; ++i) {
        prod *= nums[i];
        res = max(res, prod);
        if(!prod)
            prod = 1;
    }
    prod = 1;
    for (int i = n - 1; i >= 0; --i) {
        prod *= nums[i];
        res = max(res, prod);
        if(!prod)
            prod = 1;
    }
    return res;
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    if (n == 0) {
        cout << 0 << '\n';
        return 0;
    }
    vector<int>nums(n);
    for (int i = 0; i < n; ++i)
        cin >> nums[i];

    int ans = maximumProductSubarray(nums, n);

    cout << ans % mod << '\n';

    fclose(stdin);
    fclose(stdout);

    return 0;
}