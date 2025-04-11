#include<stdio.h>
int stack[100100];
int mx[100100];
int main() {
    int n, q;
    scanf("%d %d", &n, &q);
    int tot = 0;
    for (int i = 1;i <= n;i++) {
        int e, w;
        scanf("%d %d", &e, &w);
        if (e == 1) stack[++tot] = w;
        else {
            w += stack[tot--];
            if (tot > 0) w += stack[tot--];
            stack[++tot] = w;
        }
        if (mx[tot] < stack[tot])
            mx[tot] = stack[tot];
    }
    while (q--) {
        int x;
        scanf("%d", &x);
        int l = 0, r = n;
        while (l < r) {
            int mid = (l + r + 1) / 2;
            if (mx[mid] >= x) l = mid;
            else r = mid - 1;
        }
        printf("%d\n", l);
    }
    return 0;
}