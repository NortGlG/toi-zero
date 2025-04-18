#include<stdio.h>
#include<string.h>
char a[100];
int main() {
    scanf("%s", a);
    if (strlen(a) == 13) printf("yes");
    else printf("no");
    return 0;
}