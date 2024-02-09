#include "bits/stdc++.h"

using namespace std;
#define ll long long
#define N ((int) 2e5 + 5)

void _3bbas_(string _);


/// ◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆
vector<int> costs;
int dp[N];
int n, k;

int run(int idx) {
    if (idx >= n - 1)return 0;
    int &ret = dp[idx];

    if (~ret) return ret;
    int trry, go2 = 1e9;
    for (int i = 1; i <= k && idx + i < n; ++i)
        trry = run(idx + i) + abs(costs[idx] - costs[idx + i]), go2 = ret = min(go2, trry);
    return go2;
}

void s0lve() {
    cin >> n >> k;
    memset(dp, -1, sizeof dp);
    costs.resize(n);
    for (auto &i: costs) cin >> i;
    cout << run(0);
}

/// ◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆

signed main() {
    _3bbas_(" »»———-　Practice Makes Perfect　———-«« ");
    int tst = 1, ce = 0;
    //    cin >> tst;
    while (tst--) s0lve();
    return 0;
}


void _3bbas_(string _) {
#ifdef ONLINE_JUDGE
    cin.tie(0)->sync_with_stdio(0);
#else
    freopen(".out", "w", stdout);
#endif
}