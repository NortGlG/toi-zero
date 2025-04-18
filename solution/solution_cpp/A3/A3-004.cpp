#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int x[100100], y[100100];
int a[100100];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    for (int i = 1;i <= n;i++) {
        cin >> x[i] >> y[i];
    }
    ll ans = 0;
    for (int i = 1;i <= n;i++) a[i] = x[i] + y[i];
    sort(a + 1, a + 1 + n);
    int med = a[(n + 1) / 2];
    for (int i = 1;i <= n;i++) ans += abs(a[i] - med);
    for (int i = 1;i <= n;i++) a[i] = x[i] - y[i];
    sort(a + 1, a + 1 + n);
    med = a[(n + 1) / 2];
    for (int i = 1;i <= n;i++) ans += abs(a[i] - med);
    cout << ans << '\n';
    return 0;
}