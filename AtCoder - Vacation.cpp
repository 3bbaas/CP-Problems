#ifdef ONLINE_JUDGE
#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#pragma GCC target("avx,avx2,fma")
#define db(...) cerr<<__LINE__<<" [",__(#__VA_ARGS__,__VA_ARGS__)
#else
#include "debug.h"
#define db(...) cerr<<__LINE__<<" [",__(#__VA_ARGS__,__VA_ARGS__)
#endif

#include "bits/stdc++.h"
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ln '\n'
#define ll long long
#define pp pop_back()
#define ld long double
#define nl cout << '\n'
#define ev(_) !(_ & 1)
#define pb emplace_back
#define clr(_) _.clear()
#define N ((int)1e5 + 5)
#define oo ((ll)1e17 + 9)
#define mod ((ll)1e9 + 7)
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define sz(_) (int)(_).size()
#define pbk(_) push_back((_))
#define all(_) _.begin(), _.end()
#define alr(_) _.rbegin(), _.rend()
#define nod(_) (floor(log10(_)) + 1)
#define fori(__, _) for(auto &(__):(_))
#define kill(_) return void(cout << _ << ln)
#define init(_, __) memset((__),_,sizeof (__))
#define fix(_) cout << setprecision(_) << fixed
#define forp(__, ___, _) for(auto &[__,___]:(_))
#define unq(_) sort(all(_)),_.erase(unique(all(_)), _.end())

void _3bbas_(string _1);

/// ◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆
ll dp[N][4];
vector<int> swim, bugs, study;
int n;
ll run(int idx, int last) {
    if (idx == n) return 0;
    ll &ret = dp[idx][last];
    if (~ret)return ret;
    ll tmp1 = -1;
    if (last == 1)
        tmp1 = max(
                bugs[idx] + run(idx + 1, 2),
                study[idx] + run(idx + 1, 3)
        );
    else if (last == 2)
        tmp1 = max(
                swim[idx] + run(idx + 1, 1),
                study[idx] + run(idx + 1, 3)
        );
    else if (last == 3)
        tmp1 = max(
                swim[idx] + run(idx + 1, 1),
                bugs[idx] + run(idx + 1, 2)
        );
    else
        tmp1 = max({
                           bugs[idx] + run(idx + 1, 2),
                           study[idx] + run(idx + 1, 3),
                           swim[idx] + run(idx + 1, 1)
                   });
    return ret = tmp1;
}

void s0lve() {
    int idx = 0;
    cin >> n;
    swim.resize(n);
    bugs.resize(n);
    study.resize(n);
    init(-1, dp);
    fori(i, swim) {
        cin >> i >> bugs[idx] >> study[idx++];
    }
    cout << run(0, 0);
}

/// ◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆──◇──◆

signed main() {
    _3bbas_(" »»———-　Practice Makes Perfect　———-«« ");
    int tst = 1;
    //    cin >> tst;
    while (tst--) s0lve();
    return 0;
}

void _3bbas_(string _1) {
    cin.tie(0)->sync_with_stdio(0);
#ifndef ONLINE_JUDGE
    freopen(".out", "w", stdout);
#endif
}
