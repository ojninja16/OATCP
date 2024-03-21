#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define mod 1000000007
// const int N = 1e7+10;
// ll hsh[N];

int dp[101][101];
int a[101];
int b[101];
int n, m;

int bersuBallHelper(int i, int j) {
    if(i >= n || j >= m)
        return 0;
    if(dp[i][j] != -1)
        return dp[i][j];
    int z = 0;
    if(abs(a[i] - b[j]) <= 1)
        z = 1 + bersuBallHelper(i + 1, j + 1);
    int x = bersuBallHelper(i + 1, j);
    int y = bersuBallHelper(i, j + 1);
    return dp[i][j] = max({x, y, z});
}

int main() {
    fastio;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    cin >> m;
    for (int i = 0; i < m; ++i){
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + m);
    memset(dp, -1, sizeof(dp));
    cout << bersuBallHelper(0, 0) << '\n';

    return 0;
}