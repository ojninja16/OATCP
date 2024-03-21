#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define mod 1000000007
// const int N = 1e7+10;
// ll hsh[N];

int rotateFunction(vector<int> &nums, int n) {
    int sum = 0, f = 0;
    for (int i = 0; i < n; ++i) {
        sum += nums[i];
        f += i * nums[i];
    }
    int maxSum = f;
    for (int i = 1; i < n; ++i) {
        f = f - (sum - nums[i - 1]) + nums[i - 1] * (n - 1);
        maxSum = max(maxSum, f);
    }
    return maxSum;
}

int main() {
    fastio;
    freopen("Rotate_Function_input1.txt", "r", stdin);
    freopen("Rotate_Function_output1.txt", "w", stdout);

    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    int ans = rotateFunction(nums, n);
    cout << ans << '\n';

    return 0;
}