#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int w, l, m, n;
    cin >> w >> l >> m >> n;
    int mn = 1e9;
    for (int a = m;a <= n;a++) {
        int r1 = w % a;
        int r2 = l % a;
        if (r1 * r2 < mn) {
            mn = r1 * r2;
        }
    }
    cout << mn << '\n';
    return 0;
}