#include<stdio.h>
#define swap(a, b) do { typeof(a) temp = a; a = b; b = temp; } while (0)
int s[2020], t[2020];
int main() {
    int n, l;
    scanf("%d %d", &n, &l);
    for (int i = 1;i <= n;i++) {
        scanf("%d %d", &s[i], &t[i]);
    }
    for (int i = 1;i < n;i++) {
        for (int j = 1;j <= n - i;j++) {
            if (s[j] > s[j + 1] || (s[j] == s[j + 1] && t[j] > t[j + 1])) {
                swap(s[j], s[j + 1]);
                swap(t[j], t[j + 1]);
            }
        }
    }
    int ans = 0;
    int mn = -1;
    for (int i = 1;i <= n;i++) {
        if (s[i] > mn) {
            mn = t[i];
            ans++;
        }
        if (t[i] < mn) mn = t[i];
    }
    printf("%d\n", ans);
    return 0;
}