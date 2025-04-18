#include<stdio.h>
int sieve[15005], qs[15005];
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    // Sieve of Erathosthenes
    for (int i = 2;i <= 3 * b;i++) sieve[i] = 1;
    for (int i = 2;i * i <= 3 * b;i++) {
        if (!sieve[i]) continue;
        for (int j = i * i;j <= 3 * b;j += i) sieve[j] = 0;
    }
    for (int i = 1;i <= 3 * b;i++) qs[i] = qs[i - 1] + sieve[i];
    long long ans = 0;
    for (int x = a;x <= b;x++) {
        for (int y = x;y <= b;y++) {
            // x + y + ... = prime
            ans += qs[x + y + b] - qs[x + y + y - 1];
        }
    }
    printf("%lld\n", ans);
    return 0;
}