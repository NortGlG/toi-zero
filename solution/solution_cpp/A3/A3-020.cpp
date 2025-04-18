#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int h1, h2, b1, b2, x, y;
    cin >> h1 >> h2 >> b1 >> b2;
    cin >> x >> y;
    int mx = 0;
    for (int same = 0;same <= x;same++) { // same duplicate order
        for (int j = 0;j <= h1;j++) { // use j-th white robot
            if (j > same || j > b1 || (same - j) > h2 || (same - j) > b2) continue;
            int diff = 0;
            // use (same - j) black robot
            int h1_ = h1 - j, b1_ = b1 - j;
            int h2_ = h2 - (same - j), b2_ = b2 - (same - j);
            diff += min(h1_, b2_);
            diff += min(h2_, b1_);
            diff = min(diff, y);
            mx = max(mx, same + diff);
        }
    }
    cout << mx << '\n';
    return 0;
}