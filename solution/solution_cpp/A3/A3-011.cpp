#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int a[101];
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    set<int> s;
    for (int i = 1;i <= n;i++) cin >> a[i];
    for (int i = 1;i <= n;i++) {
        int sum = 0;
        for (int j = i;j <= n;j++) {
            sum += a[j];
            s.insert(sum);
        }
    }
    cout << s.size() << '\n';
    return 0;
}