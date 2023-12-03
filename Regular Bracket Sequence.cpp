#include <bits/stdc++.h>

using namespace std;

#define ln '\n'
#define nl cout << '\n'
#define pp pop_back()
#define pb emplace_back
#define ps(x) pb((x))
#define sz(x) (int)(x).size()
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define clr(x) x.clear()
#define all(x) x.begin(), x.end()
#define db(xx) cout << #xx << ": " << xx << ln
#define kill(x) return void(cout << x << ln)
#define alr(arr) ((arr).rbegin()), ((arr).rend())
#define fix(pre) cout << setprecision(pre) << fixed
#define ai(v1, n) for (int ele = 0; ele < n; ele++) cout << v1[ele];
typedef long long ll;

const ll mod = 1e9 + 7;
const int maxSize = 1e6 + 10;

void s0lve() {
    string s;
    cin >> s;
    vector<char> v;
    int c1 = 0, c2 = 0, x = sz(s);
    for (char i: s) {
        v.pb(i);
    }
    for (int i = 0; i < sz(s); i++) {
        if (v[i] == '(') c1++;
        else {
            c2++;
            if (c2 > c1) x--, c2 = c1 = 0;
        }
    }
    cout << x - abs(c2 - c1);
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
