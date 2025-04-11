#include<stdio.h>
int x[1010], y[1010];
int main() {
    int w, h, n, m;
    scanf("%d %d %d %d", &w, &h, &n, &m);
    for (int i = 1;i <= n;i++) scanf("%d", &x[i]);
    x[++n] = w;
    for (int i = 1;i <= m;i++) scanf("%d", &y[i]);
    y[++m] = h;
    int mx1 = 0, mx2 = 0;
    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= m;j++) {
            if ((x[i] - x[i - 1]) * (y[j] - y[j - 1]) >= mx1) {
                mx2 = mx1;
                mx1 = (x[i] - x[i - 1]) * (y[j] - y[j - 1]);
            }
            else if ((x[i] - x[i - 1]) * (y[j] - y[j - 1]) >= mx2) {
                mx2 = (x[i] - x[i - 1]) * (y[j] - y[j - 1]);
            }
        }
    }
    printf("%d %d\n", mx1, mx2);
    return 0;
}