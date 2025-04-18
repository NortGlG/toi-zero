#include<stdio.h>

int main() {
    int l, n;
    scanf("%d %d", &l, &n);
    for (int i = 1;i <= l + 1;i++) {
        n -= i * i;
        if (n < 0) {
            printf("%d\n", l - i + 1);
            break;
        }
    }
    return 0;
}