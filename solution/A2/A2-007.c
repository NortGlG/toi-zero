#include<stdio.h>
#define swap(a, b) do { typeof(a) temp = a; a = b; b = temp; } while (0)
int idx[100100];
int stack[303], cnt[303], mark[303];
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 1;i <= n;i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        idx[a] = i;
        idx[b] = -i;
    }
    for (int i = 1;i <= m;i++) {
        int x;
        scanf("%d", &x);
        mark[x] = 1;
    }
    int tot = 0;
    for (int i = 1;i <= 100000;i++) {
        if (idx[i] == 0) continue;
        if (idx[i] > 0) {
            tot++;
            stack[tot] = idx[i];
            cnt[tot] = 0;
            continue;
        }
        int ch = 0;
        int now = 0;
        int can = 0;
        idx[i] = -idx[i];
        while (tot > 0 && stack[tot] != idx[i]) {
            if (now != 0) ch = 1;
            else can = stack[tot];
            now += cnt[tot];
            tot--;
        }
        if (ch || mark[idx[i]]) stack[tot] = idx[i];
        else stack[tot] = can;
        cnt[tot] = now + mark[idx[i]];
        if (cnt[tot] == 0) tot--;
    }
    // bubble sort
    for (int i = 1;i <= tot;i++) {
        for (int j = 1;j <= tot - i;j++) {
            if (stack[j] > stack[j + 1]) {
                swap(stack[j], stack[j + 1]);
            }
        }
    }
    printf("%d\n", tot);
    for (int i = 1;i <= tot;i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}