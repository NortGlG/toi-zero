#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int l, n;
    cin >> l >> n;
    for (int i = 1;i <= l + 1;i++) {
        n -= i * i;
        if (n < 0) {
            cout << l - i + 1 << '\n';
            break;
        }
    }
    return 0;
}