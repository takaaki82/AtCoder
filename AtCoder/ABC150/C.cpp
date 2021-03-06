#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using P = pair<ll, ll>;
using Graph = vector<vector<ll>>;
#define rep(i, n) for(ll i=0;i<(ll)(n);i++)
#define rep2(i, m, n) for(ll i=m;i<(ll)(n);i++)
#define rrep(i, n, m) for(ll i=n;i>=(ll)(m);i--)
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
const int ddx[8] = {0, 1, 1, 1, 0, -1, -1, -1};
const int ddy[8] = {1, 1, 0, -1, -1, -1, 0, 1};
const ll MOD = 1000000007;
const ll INF = 1000000000000000000L;
#ifdef __DEBUG

/**
 * For DEBUG
 * https://github.com/ta7uw/cpp-pyprint
 */
#include "cpp-pyprint/pyprint.h"

#endif

void Main() {
    int N;
    cin >> N;
    vector<int> P(N), Q(N), X(N);
    rep(i, N) cin >> P[i];
    rep(i, N) cin >> Q[i];

    rep(i, N) {
        X[i] = i + 1;
    }

    int a = 0;
    int b = 0;
    int cnt = 1;
    do {
        bool ok_a = true;
        rep(i, N) {
            if (X[i] != P[i]) {
                ok_a = false;
            }
        }
        if (ok_a) {
            a = cnt;
        }
        bool ok_b = true;
        rep(i, N) {
            if (X[i] != Q[i]) {
                ok_b = false;
            }
        }
        if (ok_b) {
            b = cnt;
        }
        cnt++;
    } while (next_permutation(X.begin(), X.end()));
    cout << abs(b-a) << '\n';
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    Main();
    return 0;
}
