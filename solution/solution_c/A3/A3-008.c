#include<stdio.h>
int a[100100];
int cnt[100100];
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    for (int i = 1;i <= n;i++) {
        scanf("%d", &a[i]);
    }
    long long ans = 0;
    int res = 0;
    for (int i = 1, p = 1;i <= n;i++) {
        if (++cnt[a[i]] == 1) res++;
        if (res >= k) {
            while (res > k) {
                if (--cnt[a[p++]] == 0) res--;
            }
            while (cnt[a[p]] > 1) --cnt[a[p++]];
            ans += p;
        }
    }
    printf("%lld\n", ans);
    return 0;
}