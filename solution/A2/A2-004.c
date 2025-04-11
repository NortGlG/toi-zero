#include<stdio.h>
int cnt[303];
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1;i <= n;i++) {
        int x; scanf("%d", &x);
        cnt[x]++;
    }
    int mx = 0;
    for (int i = 1;i <= 300;i++) {
        if (cnt[i] > mx) mx = cnt[i];
    }
    printf("%d\n", mx);
    return 0;
}