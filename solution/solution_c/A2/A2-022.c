#include<stdio.h>
int s[303];
int main() {
    int l, n;
    scanf("%d %d", &l, &n);
    for (int i = 1;i <= n;i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        for (int j = a;j < b;j++) s[j]++;
    }
    int mx = 0;
    for (int i = 0;i <= l;i++) {
        if (s[i] > mx) mx = s[i];
    }
    printf("%d\n", mx);
    return 0;
}