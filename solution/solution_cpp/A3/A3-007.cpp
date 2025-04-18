#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, l;
    cin >> l >> n;
    for (int i = 0;i < 100000;i++) {
        n -= l * (l + 1) / 2 + i * l * l;
        if (n <= 0) {
            cout << i + 1 << '\n';
            break;
        }
    }
    return 0;
}