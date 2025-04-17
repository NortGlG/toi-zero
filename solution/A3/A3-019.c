#include<stdio.h>
int ans[100100];
int h[100100];
int main() {
    int n, q;
    scanf("%d %d", &n, &q);
    int mx = 0;
    for (int i = 1;i <= n;i++) {
        scanf("%d", &h[i]);
        if (h[i] > mx) {
            mx = h[i];
        }
        else {
            ans[i] = mx - h[i] + 1;
        }
    }
    while (q--) {
        int x;
        scanf("%d", &x);
        printf("%d\n", ans[x]);
    }
    return 0;
}