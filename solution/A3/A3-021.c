#include<stdio.h>
int a[100100];
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int mn = 1e9;
    for (int i = 1;i <= n;i++) {
        scanf("%d", &a[i]);
        if (a[i] < mn) mn = a[i];
    }
    int ans = n;
    long long t = 1ll * mn * k;
    for (int i = 1;i <= n;i++) {
        if ((t + a[i] - 1) / a[i] < k) ans--;
    }
    printf("%d\n", ans);
    return 0;
}