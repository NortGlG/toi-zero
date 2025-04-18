#include<stdio.h>
int a[11];
int main() {
    for (int i = 1;i <= 10;i++) {
        scanf("%d", &a[i]);
        int ch = 1;
        for (int j = 1;j < i;j++) if (a[i] == a[j]) ch = 0;
        if (ch) printf("%d ", a[i]);
    }
    return 0;
}