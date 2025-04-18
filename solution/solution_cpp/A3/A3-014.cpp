#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    int cnt0 = 0, cnt1 = 0;
    for (int i = 1;i <= n;i++) {
        int x;
        cin >> x;
        if (x > 18) cnt1++;
        else cnt0++;
    }
    if (cnt1 <= cnt0 + 1) cout << n << '\n';
    else cout << n + cnt1 - (cnt0 + 1) << '\n';
    return 0;
}