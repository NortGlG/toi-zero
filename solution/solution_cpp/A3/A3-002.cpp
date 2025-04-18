#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    int level = sqrt(n - 1);
    if (level % 2 != n % 2) cout << 2 * level << '\n';
    else cout << 2 * level - 1 << '\n';
    return 0;
}