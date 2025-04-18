#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int sieve[15005], qs[15005];
ll qs2[15005];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int a, b;
    cin >> a >> b;
    // Sieve of Erathosthenes
    for (int i = 2;i <= 3 * b;i++) sieve[i] = 1;
    for (int i = 2;i * i <= 3 * b;i++) {
        if (!sieve[i]) continue;
        for (int j = i * i;j <= 3 * b;j += i) sieve[j] = 0;
    }
    for (int i = 1;i <= 3 * b;i++) {
        qs[i] = qs[i - 1] + sieve[i];
        qs2[i] = qs2[i - 1] + qs[i];
    }
    ll ans = 0;
    for (int y = a;y <= b;y++) {
        // x + y + z = prime
        // a <= x <= y
        // y <= z <= b
        // for (int x = a;x <= y;x++)
        //     ans += qs[x + y + b] - qs[x + y + y - 1];
        // qs[i + y + b] for a <= i <= y
        ans += qs2[y + y + b] - qs2[a - 1 + y + b];
        // // - qs[i + y + y - 1] for a <= i <= y
        ans -= qs2[y + (y + y - 1)] - qs2[a - 1 + (y + y - 1)];
    }
    cout << ans << '\n';
    return 0;
}