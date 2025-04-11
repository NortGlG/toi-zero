#include<stdio.h>

int main() {
    int n; char op;
    scanf("%d %c", &n, &op);
    int m = 10 * (n % 10) + n / 10;
    if (op == '+') {
        printf("%d + %d = %d", n, m, n + m);
    }
    else {
        printf("%d * %d = %d", n, m, n * m);
    }
    return 0;
}