#include<bits/stdc++.h>
using namespace std;
using ll = long long;
struct A {
    int s, t;
    bool operator < (const A& o) const {
        if (s != o.s) return s < o.s;
        return t < o.t;
    }
} a[2020];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, l;
    cin >> n >> l;
    for (int i = 1;i <= n;i++) {
        cin >> a[i].s >> a[i].t;
    }
    sort(a + 1, a + 1 + n);
    int ans = 0;
    int mn = -1;
    for (int i = 1;i <= n;i++) {
        if (a[i].s > mn) {
            mn = a[i].t;
            ans++;
        }
        mn = min(mn, a[i].t);
    }
    cout << ans << '\n';
    return 0;
}