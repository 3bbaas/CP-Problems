#include <bits/stdc++.h>
// link: https://codeforces.com/contest/711/problem/A
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
    int n;
    cin >> n;
    vector<vector<char>> seats(n, vector<char>(4));
    char a1, a2, tmp, b1, b2;
    bool done = false;
    for (int i = 0; i < n; ++i) {
        cin >> a1 >> a2 >> tmp >> b1 >> b2;
        if (!done) {
            if (a1 == 'O' && a1 == a2)
                a1 = a2 = '+', done = true;
            else if (b1 == 'O' && b1 == b2)
                b1 = b2 = '+', done = true;
        }
        seats[i][0] = a1, seats[i][1] = a2, seats[i][2] = b1, seats[i][3] = b2;
    }
    if (done)
        yes;
    else
        kill("NO");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << seats[i][j];
            if (j == 1)cout << '|';
        }
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
