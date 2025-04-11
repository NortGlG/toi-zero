#include<stdio.h>
int p[100100], vis[100100];
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1;i <= n;i++) {
        scanf("%d", &p[i]);
    }
    int mx = 0;
    for (int i = 1;i <= n;i++) {
        if (vis[i]) continue;
        vis[i] = 1;
        int now = 1;
        int v = p[i];
        while (v != i) {
            now++;
            vis[v] = 1;
            v = p[v];
        }
        if (now > mx) mx = now;
    }
    printf("%d\n", mx);
    return 0;
}