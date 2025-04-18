#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int a[1010], vis[1010];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, s;
    cin >> n >> s;
    for (int i = 1;i <= n;i++) cin >> a[i];
    int ans = 0;
    vis[0] = 1;
    do {
        ans++;
        vis[s] = 1;
        s = a[s];
    } while (!vis[s]);
    cout << ans << '\n';
    return 0;
}