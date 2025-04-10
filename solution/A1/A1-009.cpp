#include<stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", a + b);
    if (a + b >= 50) printf("pass");
    else printf("fail");
    return 0;
}