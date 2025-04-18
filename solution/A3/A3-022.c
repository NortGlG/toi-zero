#include<stdio.h>
int light[360];
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1;i <= n;i++) {
        int l, r;
        scanf("%d %d", &l, &r);
        if (l <= r) {
            for (int j = l;j < r;j++) light[j] = 1;
        }
        else {
            for (int j = 0;j < r;j++) light[j] = 1;
            for (int j = l;j < 360;j++) light[j] = 1;
        }
    }
    int now = 0, mx = 0;
    for (int j = 0;j < 720;j++) {
        if (light[j % 360]) now++;
        else now = 0;
        if (now > mx) mx = now;
    }
    if (mx > 360) printf("%d\n", 360);
    else printf("%d\n", mx);
    return 0;
}