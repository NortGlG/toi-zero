#include<stdio.h>

int main() {
    int m, d;
    scanf("%d %d", &m, &d);
    int s = (m - 1) / 3;
    if (m % 3 == 0 && d >= 21) s = (s + 1) % 4;
    if (s == 0) printf("winter");
    else if (s == 1) printf("spring");
    else if (s == 2) printf("summer");
    else printf("fall");
    return 0;
}