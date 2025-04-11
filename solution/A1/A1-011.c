#include<stdio.h>
char a[6];
int main() {
    scanf("%s", a);
    for (int i = 0, j;i < 5;i = j) {
        for (j = i;j < 5 && a[i] == a[j];j++);
        printf("%d%c", j - i, a[i]);
    }
    return 0;
}