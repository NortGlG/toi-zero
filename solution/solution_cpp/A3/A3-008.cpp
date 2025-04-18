#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int a[100100];
int cnt[100100];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    for (int i = 1;i <= n;i++) cin >> a[i];
    ll ans = 0;
    int res = 0;
    for (int i = 1, p = 1;i <= n;i++) {
        if (++cnt[a[i]] == 1) res++;
        if (res >= k) {
            while (res > k) {
                if (--cnt[a[p++]] == 0) res--;
            }
            while (cnt[a[p]] > 1) --cnt[a[p++]];
            ans += p;
        }
    }
    cout << ans << '\n';
    return 0;
}