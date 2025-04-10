#include<stdio.h>
char a[100], b[100];
int main() {
    scanf("%s", a);
    scanf("%s", b);
    printf("Hello %s %s\n", a, b);
    printf("%c%c%c%c\n", a[0], a[1], b[0], b[1]);
    return 0;
}