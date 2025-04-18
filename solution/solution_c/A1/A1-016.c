#include<stdio.h>
char a[10];
int main() {
    scanf("%s", a);
    if (a[2] == '1' && a[3] == '6') printf("yes");
    else printf("no");
    return 0;
}