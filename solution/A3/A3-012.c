#include<stdio.h>
int a[1010], vis[1010];
int main() {
    int n, s;
    scanf("%d %d", &n, &s);
    for (int i = 1;i <= n;i++) scanf("%d", &a[i]);
    int ans = 0;
    vis[0] = 1;
    do {
        ans++;
        vis[s] = 1;
        s = a[s];
    } while (!vis[s]);
    printf("%d\n", ans);
    return 0;
}