#include<stdio.h>
#include<stdlib.h>
int x[100100], y[100100];
int a[100100];
int abs(int x) {
    if (x < 0) return -x;
    return x;
}
int cmp(const void* a, const void* b) {
    return (*(int*) a - *(int*) b);
}
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1;i <= n;i++) {
        scanf("%d %d", &x[i], &y[i]);
    }
    long long ans = 0;
    for (int i = 1;i <= n;i++) a[i] = x[i] + y[i];
    qsort(a + 1, n, sizeof(int), cmp);
    int med = a[(n + 1) / 2];
    for (int i = 1;i <= n;i++) ans += abs(a[i] - med);
    for (int i = 1;i <= n;i++) a[i] = x[i] - y[i];
    qsort(a + 1, n, sizeof(int), cmp);
    med = a[(n + 1) / 2];
    for (int i = 1;i <= n;i++) ans += abs(a[i] - med);
    printf("%lld\n", ans);
    return 0;
}