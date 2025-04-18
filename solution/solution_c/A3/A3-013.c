#include<stdio.h>

int main() {
    int n, s;
    scanf("%d %d", &n, &s);
    int mn = s, mx = s;
    for (int i = 1;i <= n;i++) {
        int x;
        scanf("%d", &x);
        if (x % 12 == 0) mn -= 10 * x / 3, mx -= 10 * x / 4;
        else if (x % 4 == 0) mn -= 10 * x / 4, mx -= 10 * x / 4;
        else mn -= 10 * x / 3, mx -= 10 * x / 3;
    }
    printf("%d %d\n", mn, mx);
    return 0;
}