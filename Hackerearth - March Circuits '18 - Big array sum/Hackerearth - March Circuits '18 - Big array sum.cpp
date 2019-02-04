#include <bits/stdc++.h>

//#pragma GCC optimize("Ofast")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define ms(s, n) memset(s, n, sizeof(s))
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); --i)
#define FORall(it, a) for (__typeof((a).begin()) it = (a).begin(); it != (a).end(); it++)
#define sz(a) int((a).size())
#define pconent(t, x) (t.find(x) != t.end())
#define all(a) (a).begin(), (a).end()
#define uni(a) (a).erase(unique(all(a)), (a).end())
#define pb push_back
#define pf push_front
#define mp make_pair
#define fi first
#define se second
#define prec(n) fixed<<setprecision(n)
#define bit(n, i) (((n) >> (i)) & 1)
#define bitcount(n) __builtin_popcountll(n)
typedef long long ll;
typedef unsigned long long uint64;
typedef long double ld;
typedef pair<int, int> pi;
typedef std::vector<int> vi;
typedef std::vector<pi> vii;
const int MOD = (int) 1e9 + 7;
const int FFTMOD = 1007681537;
const int INF = (int) 1e9;
const ll LINF = (ll) 1e18;
const ld PI = acos((ld) -1);
const ld EPS = 1e-9;
inline ll gcd(ll a, ll b) {ll r; while (b) {r = a % b; a = b; b = r;} return a;}
inline ll lcm(ll a, ll b) {return a / gcd(a, b) * b;}
inline ll fpow(ll n, ll k, int p = MOD) {ll r = 1; for (; k; k >>= 1) {if (k & 1) r = r * n % p; n = n * n % p;} return r;}
template<class T> inline int chkmin(T& a, const T& val) {return val < a ? a = val, 1 : 0;}
template<class T> inline int chkmax(T& a, const T& val) {return a < val ? a = val, 1 : 0;}
inline ll isqrt(ll k) {ll r = sqrt(k) + 1; while (r * r > k) r--; return r;}
inline ll icbrt(ll k) {ll r = cbrt(k) + 1; while (r * r * r > k) r--; return r;}
inline void addmod(int& a, int val, int p = MOD) {if ((a = (a + val)) >= p) a -= p;}
inline void submod(int& a, int val, int p = MOD) {if ((a = (a - val)) < 0) a += p;}
inline int mult(int a, int b, int p = MOD) {return (ll) a * b % p;}
inline int inv(int a, int p = MOD) {return fpow(a, p - 2, p);}
inline int sign(ld x) {return x < -EPS ? -1 : x > +EPS;}
inline int sign(ld x, ld y) {return sign(x - y);}
#define db(x) cerr << #x << " = " << (x) << " ";
#define endln cerr << "\n";
const int maxn = 1 << 20;
long long val[maxn];
int n, q;
int op[maxn];
int x[maxn];
int y[maxn];
int l[maxn];
int r[maxn];
int myrand() {
    return abs(2311 * rand() * rand() + 1992 * rand());
}
long long fen[maxn];
void upd(int p, long long val) {
    p++;
    for (; p <= n; p += p & -p) {
        fen[p] ^= val;
    }
}
long long query(int p) {
    p++;
    long long res = 0;
    for (; p > 0; p -= p & -p) {
        res ^= fen[p];
    }
    return res;
}
void chemthan() {
    srand(2311);
    FOR(i, 0, maxn) val[i] = (long long) myrand() * myrand();
    int test; std::cin >> test;
    assert(1 <= test && test <= 100);
    int sumn = 0, sumq = 0;
    while (test--) {
        std::cin >> n >> q;
        assert(1 <= n && n <= 1e5);
        assert(1 <= q && q <= 1e5);
        sumn += n, sumq += q;
        assert(1 <= sumn && sumn <= 2e5);
        assert(1 <= sumq && sumq <= 2e5);
        vi dc;
        FOR(i, 0, q) {
            std::cin >> op[i] >> x[i] >> y[i], x[i]--, y[i]--;
            assert(1 <= op[i] && op[i] <= 2);
            assert(0 <= x[i] && x[i] <= y[i] && y[i] < n);
            if (op[i] == 1) {
                std::cin >> l[i] >> r[i];
                assert(0 <= l[i] && l[i] <= r[i] && r[i] <= 1e9);
                l[i]--;
                dc.pb(l[i]), dc.pb(r[i]);
            }
        }
        sort(all(dc)), uni(dc);
        fill_n(fen, n + 1, 0);
        FOR(i, 0, q) {
            if (op[i] == 1) {
                int ll = lower_bound(all(dc), l[i]) - dc.begin();
                int rr = lower_bound(all(dc), r[i]) - dc.begin();
                upd(x[i], val[ll] ^ val[rr]);
                upd(y[i] + 1, val[ll] ^ val[rr]);
            }
            else {
                if (query(x[i]) == query(y[i])) {
                    std::cout << "YES\n";
                }
                else {
                    std::cout << "NO\n";
                }
            }
        }
    }
}
int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(0), std::cin.tie(0);
    if (argc > 1) {
        assert(freopen(argv[1], "r", stdin));
    }
    if (argc > 2) {
        assert(freopen(argv[2], "wb", stdout));
    }
    chemthan();
    cerr << "\nTime elapsed: " << 1000 * clock() / CLOCKS_PER_SEC << "ms\n";
    return 0;
}
