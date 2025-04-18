#include<stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c) printf("all the same");
    else if (a != b && b != c && a != c) printf("all different");
    else printf("neither");
    return 0;
}