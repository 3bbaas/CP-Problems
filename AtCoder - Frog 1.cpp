#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define N ((int) 2e5 + 5)

void _3bbas_(string _);


/// ◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆
vector<int> costs;
int dp[N];
int n;

int run(int idx) {

    if (idx + 1 >= n)return 0;
    int go2 = INT32_MAX;
    int &ret = dp[idx];
    if (~ret) return ret;
    int go1 = run(idx + 1) + abs(costs[idx] - costs[idx + 1]);
    if (idx + 2 < n)
        go2 = run(idx + 2) + abs(costs[idx] - costs[idx + 2]);
    return ret = min(go1, go2);
}

void s0lve() {
    cin >> n;
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