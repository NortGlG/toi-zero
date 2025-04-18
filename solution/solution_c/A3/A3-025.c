#include<stdio.h>
int can[100100];
int wood[100100];
int main() {
    int n, w, l;
    scanf("%d %d %d", &n, &w, &l);
    for (int i = 1;i <= w;i++) can[i] = 1;
    for (int i = 1;i <= n;i++) {
        int k;
        scanf("%d", &k);
        for (int i = 1;i <= w;i++) wood[i] = 0;
        for (int j = 1;j <= k;j++) {
            int x;
            scanf("%d", &x);
            int lb = (x - l > 0) ? x - l : 1;
            int rb = (x + l <= w) ? x + l : w;
            for (int p = lb;p <= rb;p++) wood[p] = 1;
        }
        for (int j = 1;j <= w;j++) {
            if (!wood[j]) can[j] = 0;
        }
    }
    for (int i = 1;i <= w;i++) {
        if (can[i]) {
            printf("1\n"); return 0;
        }
    }
    printf("0\n");
    return 0;
}