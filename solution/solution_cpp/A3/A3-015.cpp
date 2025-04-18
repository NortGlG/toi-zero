#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int a[1010];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    for (int i = 1;i <= n;i++) cin >> a[i];
    sort(a + 1, a + 1 + n);
    int ans = 0;
    int sum = 0;
    for (int i = 1;i <= n;i++) {
        sum += a[i];
        ans += 2 * sum;
    }
    cout << ans << '\n';
    return 0;
}