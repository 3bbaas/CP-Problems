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
#define clr(mod) (mod).clear()
#define all(x) begin(x), end(x)
//#define all(x) (x).begin(), (x).end
#define db(xx) cout << #xx << ": " << xx << ln
#define kill(D) return void(cout << D << ln)
#define alr(arr) ((arr).rbegin()), ((arr).rend())
#define fix(pre) cout << setprecision(pre) << fixed;
#define ai(v1, n) for (int ele = 0; ele < n; ele++) cout << v1[ele];
#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
typedef long long ll;

void err(istream_iterator<string> it) {}

template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
    cerr << *it << " = " << a << ln;
    err(++it, args...);
}

const ll mod = 1e9 + 7;
const int maxSize = 1e6 + 10;

template<typename T = int> using veprs = vector<pair<T, T>>;

veprs<ll> primeFactors(ll n) { // sqrt (n)
    veprs<ll> ret;
    for (int i = 2; (i * i) <= n; i += (1 + (i & 1))) {
        if (n % i == 0) {
            ll c = 0;
            while (n % i == 0)
                n /= i, c++;
            ret.pb(i, c);
        }
    }
    if (n > 1)
        ret.pb(n, 1);
    return ret;
}

void s0lve() {
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
        auto vec = primeFactors(i);
        cnt += (vec.size() == 2);
    }
    cout << cnt;
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
