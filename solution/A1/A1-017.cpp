#include<stdio.h>

int main() {
    int y1, m1, d1, y2, m2, d2;
    scanf("%d %d %d", &y1, &m1, &d1);
    scanf("%d %d %d", &y2, &m2, &d2);
    if (y1 < y2 || (y1 == y2 && m1 < m2) || (y1 == y2 && m1 == m2 && d1 < d2)) printf("1");
    else if (y1 == y2 && m1 == m2 && d1 == d2) printf("0");
    else printf("2");
    return 0;
}