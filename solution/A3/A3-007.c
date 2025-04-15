#include<stdio.h>

int main() {
    int n, l;
    scanf("%d %d", &l, &n);
    for (int i = 0;i < 100000;i++) {
        n -= l * (l + 1) / 2 + i * l * l;
        if (n <= 0) {
            printf("%d\n", i + 1);
            break;
        }
    }
    return 0;
}