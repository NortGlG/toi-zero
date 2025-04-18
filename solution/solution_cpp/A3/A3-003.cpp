#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int a[303], b[303];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    for (int i = 1;i <= n;i++) cin >> a[i];
    for (int i = 1;i <= n;i++) cin >> b[i];
    a[0] = b[0] = 1;
    int ans = 0;
    for (int i = 1;i <= n;i++) {
        int aa = a[i - 1], bb = b[i - 1];
        int na = a[i], nb = b[i];
        if (aa > na) swap(aa, na);
        if (bb > nb) swap(bb, nb);
        // aa -- na  cross  bb -- nb
        // [aa, na]
        if ((aa < bb && bb < na) && (nb < aa || na < nb)) ans++;
        else if ((aa < nb && nb < na) && (bb < aa || na < bb)) ans++;
        else if (aa == bb && na == nb) ans++;
    }
    cout << ans << '\n';
    return 0;
}