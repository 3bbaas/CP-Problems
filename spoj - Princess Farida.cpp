#include "bits/stdc++.h"

using namespace std;
#define ll long long
#define N ((int) 2e5 + 5)

void _3bbas_(string _);


/// ◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆

vector<ll> mon(N);
ll n, dp[N];

ll get(int idx) {
    if (idx >= n) return 0;
    ll &ret = dp[idx];
    if (~ret) return ret;
    ll mx1 = get(idx + 1);
    ll mx2 = get(idx + 2) + mon[idx];
    return ret = max(mx1, mx2);
}

void s0lve() {
    cin >> n;
    mon.resize(n);
    memset(dp, -1, sizeof dp);
    for (auto &i: mon) {
        cin >> i;
    }
    cout << get(0) << '\n';
}

/// ◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆

signed main() {
    _3bbas_(" »»———-　Practice Makes Perfect　———-«« ");
    int tst = 1, i = 0;
    cin >> tst;
    while (tst--) cout << "Case " << ++i << ": ", s0lve();
    return 0;
}


void _3bbas_(string _) {
#ifdef ONLINE_JUDGE
    cin.tie(0)->sync_with_stdio(0);
#else
    freopen(".out", "w", stdout);
#endif
}