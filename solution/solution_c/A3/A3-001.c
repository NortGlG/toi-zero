#include<stdio.h>
int ans = 0;
int a[1010], b[1010], l[1010], r[1010];
int w[1010];
int abs(int x) {
    if (x < 0) return -x;
    return x;
}
void dfs(int v) {
    int wl, wr;
    if (a[v] == 0) {
        dfs(l[v]);
        wl = w[l[v]];
    }
    else wl = l[v];
    if (b[v] == 0) {
        dfs(r[v]);
        wr = w[r[v]];
    }
    else wr = r[v];
    int diff = abs(wr - wl);
    ans += diff;
    w[v] = wl + wr + diff;
}
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1;i <= n;i++) {
        scanf("%d %d %d %d", &a[i], &l[i], &b[i], &r[i]);
    }
    dfs(1);
    printf("%d\n", ans);
    return 0;
}