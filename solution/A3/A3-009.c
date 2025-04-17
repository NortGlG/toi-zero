#include<stdio.h>
int cnt[303];
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    for (int i = 1;i <= n;i++) {
        int x;
        scanf("%d", &x);
        cnt[x]++;
    }
    int mn = 1e9;
    for (int i = 1;i <= k;i++) {
        if (cnt[i] < mn) mn = cnt[i];
    }
    int ans = 0;
    for (int i = 1;i <= k;i++) ans += cnt[i] - mn;
    printf("%d\n", ans);
    return 0;
}