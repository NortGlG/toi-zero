#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int x[1010], b[2020];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    for (int i = 1;i <= n;i++) cin >> x[i];
    sort(x + 1, x + 1 + n, greater<int>());
    // calculate drone
    int cnt = 0;
    for (int i = 1;i <= 200;i++) {
        b[++cnt] = i;
        for (int j = 1;j <= 9;j++) b[++cnt] = 2 * i;
    }
    sort(b + 1, b + 1 + cnt);
    int ans = 0;
    for (int i = 1;i <= n;i++) {
        ans += x[i] * b[i];
    }
    cout << ans << '\n';
    return 0;
}