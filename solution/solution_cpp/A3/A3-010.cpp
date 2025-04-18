#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, k, t;
    cin >> n >> k >> t;
    t--;
    int ans = 1;
    int now = 0;
    do {
        now = (now + k) % n;
        ans++;
    } while (now != 0 && now != t);
    if (now == 0) ans--;
    cout << ans << '\n';
    return 0;
}