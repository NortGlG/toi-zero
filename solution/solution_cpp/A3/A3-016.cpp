#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 100100;
vector<int> adj[N];
int deg[N], vis[N], t[N];
int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1;i <= m;i++) {
        cin >> deg[i];
        for (int j = 1;j <= deg[i];j++) {
            int x;
            cin >> x;
            adj[x].push_back(i);
        }
        cin >> t[i];
    }
    int ans = 0;
    queue<int> q;
    q.push(1);
    vis[1] = 1;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        ans++;
        for (auto& x : adj[v]) {
            if (--deg[x] == 0 && !vis[t[x]]) {
                vis[t[x]] = 1;
                q.push(t[x]);
            }
        }
    }
    cout << ans << '\n';
    return 0;
}