#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int cnt0 = 0, cnt1 = 0;
    for (int i = 1;i <= n;i++) {
        int x;
        scanf("%d", &x);
        if (x > 18) cnt1++;
        else cnt0++;
    }
    if (cnt1 <= cnt0 + 1) printf("%d\n", n);
    else printf("%d\n", n + cnt1 - (cnt0 + 1));
    return 0;
}