#include<stdio.h>
int x[100100], y[100100];
int a[100100], b[100100];
int ta[100100], tb[100100];
void merge_sort(int l, int r) {
    if (l == r) return;
    int mid = (l + r) / 2;
    merge_sort(l, mid), merge_sort(mid + 1, r);
    int pl = l, pr = mid + 1, pall = l;
    while (pl <= mid && pr <= r) {
        if (a[pl] < a[pr] || (a[pl] == a[pr] && b[pl] < b[pr])) {
            ta[pall] = a[pl], tb[pall] = b[pl];
            pall++, pl++;
        }
        else {
            ta[pall] = a[pr], tb[pall] = b[pr];
            pall++, pr++;
        }
    }
    while (pl <= mid) {
        ta[pall] = a[pl], tb[pall] = b[pl];
        pall++, pl++;
    }
    while (pr <= r) {
        ta[pall] = a[pr], tb[pall] = b[pr];
        pall++, pr++;
    }
    for (int i = l;i <= r;i++) {
        a[i] = ta[i], b[i] = tb[i];
    }
}
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1;i <= n;i++) {
        scanf("%d %d", &x[i], &y[i]);
    }
    for (int i = 1;i <= n;i++) {
        a[i] = x[i] + y[i];
        b[i] = y[i];
    }
    merge_sort(1, n);
    int mx = 0;
    for (int i = 0, j;i <= n;i = j) {
        for (j = i;j <= n && a[i] == a[j];j++);
        if (b[j - 1] - b[i] > mx) mx = b[j - 1] - b[i];
    }
    for (int i = 1;i <= n;i++) {
        a[i] = x[i] - y[i];
        b[i] = y[i];
    }
    merge_sort(1, n);
    for (int i = 0, j;i <= n;i = j) {
        for (j = i;j <= n && a[i] == a[j];j++);
        if (b[j - 1] - b[i] > mx) mx = b[j - 1] - b[i];
    }
    printf("%d\n", mx);
    return 0;
}