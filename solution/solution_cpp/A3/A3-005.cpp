#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int qs[1001000];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    for (int i = 1;i <= m;i++) {
        int l, r;
        cin >> l >> r;
        qs[l]++, qs[r + 1]--;
    }
    int mx = 0;
    for (int i = 1;i <= n;i++) {
        qs[i] += qs[i - 1];
        if (qs[i] > mx) mx = qs[i];
    }
    cout << mx << '\n';
    return 0;
}