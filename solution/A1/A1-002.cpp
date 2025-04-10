#include<stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    printf("10 = %d\n", x / 10), x %= 10;
    printf("5 = %d\n", x / 5), x %= 5;
    printf("2 = %d\n", x / 2), x %= 2;
    printf("1 = %d\n", x);
    return 0;
}