#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int ans[100100];
int h[100100];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, q;
    cin >> n >> q;
    int mx = 0;
    for (int i = 1;i <= n;i++) {
        cin >> h[i];
        if (h[i] > mx) mx = h[i];
        else ans[i] = mx - h[i] + 1;
    }
    while (q--) {
        int x;
        cin >> x;
        cout << ans[x] << '\n';
    }
    return 0;
}