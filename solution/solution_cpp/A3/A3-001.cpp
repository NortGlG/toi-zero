#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1010;
int ans = 0;
int a[N], b[N], l[N], r[N], w[N];
void dfs(int v) {
    int wl, wr;
    if (a[v] == 0) {
        dfs(l[v]);
        wl = w[l[v]];
    }
    else wl = l[v];
    if (b[v] == 0) {
        dfs(r[v]);
        wr = w[r[v]];
    }
    else wr = r[v];
    int diff = abs(wr - wl);
    ans += diff;
    w[v] = wl + wr + diff;
}
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    for (int i = 1;i <= n;i++) {
        cin >> a[i] >> l[i] >> b[i] >> r[i];
    }
    dfs(1);
    cout << ans << '\n';
    return 0;
}