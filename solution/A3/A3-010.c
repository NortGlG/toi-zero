#include<stdio.h>

int main() {
    int n, k, t;
    scanf("%d %d %d", &n, &k, &t);
    t--;
    int ans = 1;
    int now = 0;
    do {
        now = (now + k) % n;
        ans++;
    } while (now != 0 && now != t);
    if (now == 0) ans--;
    printf("%d\n", ans);
    return 0;
}