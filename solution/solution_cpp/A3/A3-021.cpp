#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int a[100100];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    int mn = 1e9;
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
        mn = min(mn, a[i]);
    }
    int ans = n;
    ll t = 1ll * mn * k;
    for (int i = 1;i <= n;i++) {
        if ((t + a[i] - 1) / a[i] < k) ans--;
    }
    cout << ans << '\n';
    return 0;
}