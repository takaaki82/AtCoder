#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> P;
typedef long long ll;
#define rep(i, n) for(int i=0;i<n;i++)
#define rep2(i, m, n) for(int i=m;i<n;i++)
#define rrep(i, n, m) for(int i=n;i>=m;i--)
using Graph = vector<vector<int>>;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
const ll MOD = 1000000007;
#ifdef __DEBUG

#include "cpp-pyprint/pyprint.h"

#endif

void Main() {
    int N;
    cin >> N;

    Graph graph(N + 1, vector<int>());
    ll cnt = 0;
    for (int i = 1; i <= N; ++i) {
        for (int j = i; j <= N; ++j) {
            if (i == j) {
                continue;
            }
            if (N % 2 == 1) {
                if (j != N - i) {
                    cnt++;
                    graph[i].push_back(j);
                }
            } else {
                if (j != N - i + 1) {
                    cnt++;
                    graph[i].push_back(j);
                }
            }
        }
    }
    cout << cnt << endl;
    for (int i = 1; i <= N; ++i) {
        for (auto v : graph[i]) {
            cout << i << " " << v << endl;
        }
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    Main();
}
