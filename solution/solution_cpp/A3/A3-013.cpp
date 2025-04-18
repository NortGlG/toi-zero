#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, s;
    cin >> n >> s;
    int mn = s, mx = s;
    for (int i = 1;i <= n;i++) {
        int x;
        cin >> x;
        if (x % 12 == 0) mn -= 10 * x / 3, mx -= 10 * x / 4;
        else if (x % 4 == 0) mn -= 10 * x / 4, mx -= 10 * x / 4;
        else mn -= 10 * x / 3, mx -= 10 * x / 3;
    }
    cout << mn << ' ' << mx << '\n';
    return 0;
}