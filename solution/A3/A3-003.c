#include<stdio.h>
#define swap(a, b) do { typeof(a) temp = a; a = b; b = temp; } while (0)
int a[303], b[303];
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1;i <= n;i++)
        scanf("%d", &a[i]);
    for (int i = 1;i <= n;i++)
        scanf("%d", &b[i]);
    a[0] = b[0] = 1;
    int ans = 0;
    for (int i = 1;i <= n;i++) {
        int aa = a[i - 1], bb = b[i - 1];
        int na = a[i], nb = b[i];
        if (aa > na) swap(aa, na);
        if (bb > nb) swap(bb, nb);
        // aa -- na  cross  bb -- nb
        // [aa, na]
        if ((aa < bb && bb < na) && (nb < aa || na < nb)) ans++;
        else if ((aa < nb && nb < na) && (bb < aa || na < bb)) ans++;
        else if (aa == bb && na == nb) ans++;
    }
    printf("%d\n", ans);
    return 0;
}