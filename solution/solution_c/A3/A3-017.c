#include<stdio.h>

int main() {
    int w, l, m, n;
    scanf("%d %d %d %d", &w, &l, &m, &n);
    int mn = 1e9;
    for (int a = m;a <= n;a++) { // 
        int r1 = w % a;
        int r2 = l % a;
        if (r1 * r2 < mn) {
            mn = r1 * r2;
        }
    }
    printf("%d\n", mn);
    return 0;
}