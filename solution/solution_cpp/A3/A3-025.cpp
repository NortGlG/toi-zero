#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool can[100100];
int wood[100100];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n, w, l;
    cin >> n >> w >> l;
    for (int i = 1;i <= w;i++) can[i] = 1;
    for (int i = 1;i <= n;i++) {
        int k;
        cin >> k;
        memset(wood, 0, sizeof wood);
        for (int j = 1;j <= k;j++) {
            int x;
            cin >> x;
            wood[max(1, x - l)]++;
            wood[min(w + 1, x + l + 1)]--;
        }
        for (int j = 1;j <= w;j++) {
            wood[j] += wood[j - 1];
            if (!wood[j]) can[j] = 0;
        }
    }
    for (int i = 1;i <= w;i++) {
        if (can[i]) {
            cout << 1 << '\n';
            return 0;
        }
    }
    cout << 0 << '\n';
    return 0;
}