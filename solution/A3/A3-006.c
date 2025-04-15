#include<stdio.h>
#include<stdlib.h>
int x[1010], b[2020];
int cmp(const void* a, const void* b) { // ascending
    return (*(int*) a - *(int*) b);
}
int cmp2(const void* a, const void* b) { // descending
    return (*(int*) b - *(int*) a);
}
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1;i <= n;i++) {
        scanf("%d", &x[i]);
    }
    qsort(x + 1, n, sizeof(int), cmp2);
    // calculate drone
    int cnt = 0;
    for (int i = 1;i <= 200;i++) {
        b[++cnt] = i;
        for (int j = 1;j <= 9;j++) b[++cnt] = 2 * i;
    }
    qsort(b + 1, cnt, sizeof(int), cmp);
    int ans = 0;
    for (int i = 1;i <= n;i++) {
        ans += x[i] * b[i];
    }
    printf("%d\n", ans);
    return 0;
}