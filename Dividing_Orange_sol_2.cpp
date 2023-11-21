#include <bits/stdc++.h>

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
int arr[30 + 5], arr2[900 + 230];

void s0lve() {
    int n, k, ctr;
    cin >> n >> k;
    for (int i = 0; i < k; i++) {
        cin >> arr[i];
        arr2[arr[i]] = 1;
    }
    for (int i = 0; i < k; i++) {
        cout << arr[i] << ' ';
        ctr = 1;
        for (int j = 1; j <= (n * k); j++) {
            if (ctr >= n)break;
            if (!arr2[j]) {
                arr2[j] = 1;
                ctr++;
                cout << j << ' ';
            }
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
