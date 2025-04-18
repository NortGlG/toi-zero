#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int cnt[303];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    for (int i = 1;i <= n;i++) {
        int x;
        cin >> x;
        cnt[x]++;
    }
    int mn = 1e9;
    for (int i = 1;i <= k;i++) {
        if (cnt[i] < mn) mn = cnt[i];
    }
    int ans = 0;
    for (int i = 1;i <= k;i++) ans += cnt[i] - mn;
    cout << ans << '\n';
    return 0;
}