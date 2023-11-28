#include <bits/stdc++.h>

#ifndef ONLINE_JUDGE

#include "debug.h"

#endif

using namespace std;

#define ln '\n'
#define nl cout << '\n'
#define pp pop_back()
#define pb emplace_back
#define ps(x) push_back((x))
#define sz(x) (int)(x).size()
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define clr(mod) (mod).clear()
#define all(x) begin(x), end(x)
//#define all(x) (x).begin(), (x).end
//#define db(xx) cout << #xx << ": " << xx << ln
#define kill(D) return void(cout << D << ln)
#define alr(arr) ((arr).rbegin()), ((arr).rend())
#define fix(pre) cout << setprecision(pre) << fixed
#define ai(v1, n) for (int ele = 0; ele < n; ele++) cout << v1[ele];
typedef long long ll;

const ll mod = 1e9 + 7;
const int maxSize = 1e6 + 10;

bool isPerfectSquare(long double x) {
    return (((long double) sqrt(x) - floor((long double) sqrt(x))) == 0);
}


ll sumOfPowers(ll a, int k) { // O(k)
    if (k == 0) return 0;
    if (k % 2 == 1) return a * (1 + sumOfPowers(a, k - 1));
    ll half = sumOfPowers(a, k / 2);
    return half * (1 + half - sumOfPowers(a, k / 2 - 1));
}


void s0lve() {
    int n, m;
    cin >> n >> m;
    vector<int> order(10, 0);
    queue<int> q;
    int mx = 0, pos = 0;
    for (int a, i = 0; i < n; ++i)
        cin >> a, q.push(a), mx = max(a, mx), order[a]++;
    while (1) {
        int top = q.front();
        q.pop();
        if (top == mx) {
            pos++;
            if (m)m--;
            else break;
            order[top]--;
        } else {
            q.push(top);
            if (m)m--;
            else m = sz(q) - 1;
        }
        while (!(order[mx]))mx--;
    }
    cout << pos << ln;
}


void _3bbas_();

signed main() {
    _3bbas_();
    int tst = 1;
    cin >> tst;
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
