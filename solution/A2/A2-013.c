#include<stdio.h>

int main() {
    char c;
    int g;
    scanf(" %c %d", &c, &g);
    char a;
    int s, v;
    scanf(" %c %d %d", &a, &s, &v);
    int ans = 0;
    if (c == 'H') ans = 5 * g;
    else if (c == 'O') ans = 3 * g;
    else ans = 2 * g;
    if (a == 'R') ans += (6 + 6 * s + (s == 3)) * v;
    else if (a == 'T') ans += (15 + 5 * s * (s - 1) / 2) * v;
    else ans += (5 + 5 * s) * v;
    printf("%d\n", ans);
    return 0;
}