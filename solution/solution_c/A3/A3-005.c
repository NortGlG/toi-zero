#include<stdio.h>
int qs[1001000];
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 1;i <= m;i++) {
        int l, r;
        scanf("%d %d", &l, &r);
        qs[l]++, qs[r + 1]--;
    }
    int mx = 0;
    for (int i = 1;i <= n;i++) {
        qs[i] += qs[i - 1];
        if (qs[i] > mx) mx = qs[i];
    }
    printf("%d\n", mx);
    return 0;
}