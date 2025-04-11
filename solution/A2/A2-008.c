#include<stdio.h>
int p[200200], v[200200];
int main() {
    int n;
    scanf("%d", &n);
    for (int i = n;i >= 1;i--) scanf("%d %d", &p[i], &v[i]);
    int mx = 0, ans = 0;
    for (int i = 1;i <= n;i++) {
        if (v[i] > mx) mx = v[i];
        else ans++;
    }
    printf("%d\n", ans);
    return 0;
}