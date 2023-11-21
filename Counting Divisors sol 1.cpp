#include <bits/stdc++.h>

using namespace std;
#define ln '\n'
#define nl cout << '\n'
#define pp pop_back()
#define pb emplace_back
#define ps(x) push_back((x))
#define sz(x) (int)(x).size()
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define clr(M) (M).clear()
#define all(x) begin(x), end(x)
#define db(xx) cout << #xx << ": " << xx << ln
#define kill(D) return void(cout << D << ln)
#define alr(vv) ((vv).rbegin()), ((vv).rend())
#define fix(pre) cout << setprecision(pre) << fixed;
#define ai(v1, n) for (int ele = 0; ele < n; ele++) cout << v1[ele];

typedef long long ll;

const ll mod = 1e9 + 7;
const int maxSize = 1e6 + 10;

struct modifiedSieve {
    int com[maxSize];

    modifiedSieve() { sieve(); }

    void sieve() {
        iota(com, com + maxSize, 0);
        com[0] = com[1] = -1;
        for (int i = 2; (i * i) < maxSize; ++i)
            if (com[i] == i)
                for (int j = i * i; j < maxSize; j += i)
                    if (com[j] == j)
                        com[j] = i;
    }

    vector<int> factorize(int n) {
        vector<int> ret;
        while (n > 1) {
            ret.pb(com[n]);
            n /= com[n];
        }
        return ret;
    }

    vector<pair<int, int>> factorizeFrq(int n) {
        vector<pair<int, int>> ret;
        while (n > 1) {
            int cnt = 0, cur = com[n];
            while (n % cur == 0)
                ++cnt, n /= cur;
            ret.pb(cur, cnt);
        }
        return ret;
    }
} ms;

void s0lve() {
    int x;
    cin >> x;
    auto arr = ms.factorizeFrq(x);
    ll val = 1;
    for (auto [a, b]: arr)
        val *= (b + 1);
    cout << val;
}

void _3bbas_();

signed main() {
    _3bbas_();
    int tst = 1;
    cin >> tst;
    while (tst--)
        s0lve(), nl;
    return 0;
}

void _3bbas_() {
    cin.tie(0)->sync_with_stdio(0);
#ifndef ONLINE_JUDGE
    freopen(".out", "w", stdout);
#endif
}
