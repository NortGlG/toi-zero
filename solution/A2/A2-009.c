#include<stdio.h>
int b[33][33];
int q[1000];
int main() {
    int n, c;
    scanf("%d %d", &n, &c);
    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= n;j++) {
            scanf("%d", &b[i][j]);
        }
    }
    int tot = 0;
    for (int i = 1;i <= n;i++) q[++tot] = i;
    for (int i = 1;i < tot;i += 2) {
        int u = q[i], v = q[i + 1];
        if (b[u][v] == v) u = q[i + 1], v = q[i];
        if (v == c) c = 0, q[++tot] = v;
        else q[++tot] = u;
    }
    printf("%d\n", q[tot]);
    return 0;
}