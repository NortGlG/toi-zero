#include<stdio.h>
int r[100100];
int p[200200], v[200200];
int s[100100], t[100100], deg[100100];
int vis[100100], q[100100];
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int tot = 0;
    for (int i = 1;i <= m;i++) {
        scanf("%d", &deg[i]);
        for (int j = 1;j <= deg[i];j++) {
            int x;
            scanf("%d", &x);
            tot++;
            v[tot] = i;
            if (r[x]) p[tot] = r[x];
            r[x] = tot;
            // tips : just use vector
            // adj[x].push_back(i);
        }
        scanf("%d", &t[i]);
    }
    tot = 1;
    q[tot] = 1;
    vis[1] = 1;
    for (int i = 1;i <= tot;i++) {
        int now = r[q[i]];
        while (now != 0) {
            if (--deg[v[now]] == 0) {
                if (!vis[t[v[now]]]) {
                    vis[t[v[now]]] = 1;
                    q[++tot] = t[v[now]];
                }
            }
            now = p[now];
        }
    }
    printf("%d\n", tot);
    return 0;
}