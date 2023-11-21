#include <bits/stdc++.h>
// link: https://codeforces.com/contest/244/problem/A
#pragma GCC push_options
#pragma GCC optimization("Ofast")
#pragma GCC target("avx,avx2,fma")
#define _CRT_SECURE_NO_WARNINGS

using namespace std;
#define ln '\n'
#define nl cout << '\n'
#define pp pop_back()
#define pb emplace_back
#define ps(x) push_back((x))
#define sz(x) (int)(x).size()
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define all(x) begin(x), end(x)
#define db(xx) cout << #xx << ": " << xx << ln
#define kill(D) return void(cout << D << ln)
#define alr(vv) ((vv).rbegin()), ((vv).rend())
#define fix(pre) cout << setprecision(pre) << fixed;
#define ai(v1, n) for (int ele = 0; ele < n; ele++) cout << v1[ele];
typedef long long ll;

void s0lve() {
    int n, k;
    cin >> n >> k;
    set<int> s;
    for (int i = 1; i <= (n * k); i++)s.insert(i);
    int del;
    vector<vector<int>> ans(k);
    for (int i = 0; i < k; ++i) {
        cin >> del;
        s.erase(del);
        ans[i].pb(del);
    }
    for (int i = 0; i < k; ++i) {
        for (int j = 0; j < ((n * k) - k) / k; ++j) {
            int rem = *s.begin();
            ans[i].pb(rem);
            s.erase(rem);
        }
    }
    for (int i = 0; i < k; ++i) {
        for (int vl: ans[i])cout << vl << ' ';
        nl;
    }
}

void _3bbas_();

signed main() {
    _3bbas_();
    int tst = 1;
//    cin >> tst;
    while (tst--)
        s0lve();
    return 0;
}

void _3bbas_() {
    cin.tie(0)->sync_with_stdio(0);
#ifndef ONLINE_JUDGE
    freopen(".out", "w", stdout);
#endif
}
