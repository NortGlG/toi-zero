#include<stdio.h>
#include<math.h>

int main() {
    int n;
    scanf("%d", &n);
    int level = sqrt(n - 1);
    if (level % 2 != n % 2) printf("%d\n", 2 * level);
    else printf("%d\n", 2 * level - 1);
    return 0;
}