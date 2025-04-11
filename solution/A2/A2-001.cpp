#include<stdio.h>
void swap(int& a, int& b) {
    int c = a;
    a = b;
    b = c;
}
int a[505], b[505];
int cut1(int x1, int x2, int y1, int y2) {
    if (x1 > y1) swap(x1, y1), swap(x2, y2);
    if (x1 == y1 || x2 == y2) return 0;
    return x2 > y2;
}
int cut2(int x1, int x2, int y1, int y2) {
    if (x1 > y1) swap(x1, y1), swap(x2, y2);
    return x2 > y1;
}
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 1;i <= n;i++) scanf("%d", &a[i]);
    for (int i = 1;i <= m;i++) scanf("%d", &b[i]);
    int ans = 0;
    // meet at the event point
    for (int i = 0;i <= n;i++) for (int j = 0;j <= m;j++) {
        if (i % 2 == j % 2 && a[i] == b[j]) ans++;
    }
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < m;j++) {
            if (i % 2 == j % 2 && cut1(a[i], a[i + 1], b[j], b[j + 1])) ans++; // from same side
            else if (i % 2 != j % 2 && cut2(a[i], a[i + 1], b[j], b[j + 1])) ans++; // from different side
        }
    }
    printf("%d\n", ans);
    return 0;
}