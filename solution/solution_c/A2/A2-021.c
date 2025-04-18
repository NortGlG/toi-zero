#include<stdio.h>
#define swap(a, b) do { typeof(a) temp = a; a = b; b = temp; } while (0)
#define max(a, b) (a>b?a:b)
#define min(a, b) (a<b?a:b)
int a[303], b[303], c[303], d[303];
int n;
void sort(int t[]) { // bubble sort
    for (int i = 1;i < n;i++) {
        for (int j = 1;j <= n - i;j++) {
            if (t[j] > t[j + 1]) {
                swap(t[j], t[j + 1]);
            }
        }
    }
}
int main() {
    int k;
    scanf("%d %d", &n, &k);
    for (int i = 1;i <= n;i++) scanf("%d", &a[i]);
    for (int i = 1;i <= n;i++) scanf("%d", &b[i]);
    for (int i = 1;i <= n;i++) scanf("%d", &c[i]);
    for (int i = 1;i <= n;i++) scanf("%d", &d[i]);
    sort(a), sort(b), sort(c), sort(d);
    int mn = 2e6;
    for (int i = 0;i <= k;i++) {
        if (i > n || k - i > n) continue;
        // send i to first, k - i to second
        int mx = 0;
        for (int j = 1;j <= i;j++) {
            mx = max(mx, a[j] + c[i - j + 1]);
        }
        for (int j = 1;j <= k - i;j++) {
            mx = max(mx, b[j] + d[(k - i) - j + 1]);
        }
        mn = min(mn, mx);
    }
    printf("%d\n", mn);
    return 0;
}