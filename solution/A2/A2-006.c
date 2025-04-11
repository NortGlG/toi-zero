#include<stdio.h>
char b[33][33];
int can[33][33];
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1;i <= n;i++) {
        scanf("%s", b[i] + 1);
    }
    int ans = 0;
    can[n][n] = 1;
    for (int i = n;i >= 1;i--) {
        for (int j = n;j >= 1;j--) {
            if (b[i][j] == 'X') continue;
            if (can[i + 1][j] || can[i][j + 1]) can[i][j] = 1;
            if (can[i][j]) {
                ans++;
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}