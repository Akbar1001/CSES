#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int M = 1e9 + 7;

void solve() {
    int n;
    cin >> n;

    // dp[x] will store the number of ways to form sum x
    vector<ll> dp(n + 1, 0);
    
    // Base case: There is exactly 1 way to make a sum of 0 (by throwing 0 dice)
    dp[0] = 1;

    // Compute the number of ways for every sum from 1 up to n
    for (int x = 1; x <= n; x++) {
        // Try all 6 possible faces of the dice for the current throw
        for (int dice = 1; dice <= 6; dice++) {
            if (x - dice >= 0) {
                dp[x] = (dp[x] + dp[x - dice]) % M;
            }
        }
    }

    cout << dp[n] << "\n";
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}
