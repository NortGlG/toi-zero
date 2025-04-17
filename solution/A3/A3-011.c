#include<stdio.h>
int a[101], b[10010];
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1;i <= n;i++) scanf("%d", &a[i]);
    int tot = 0;
    for (int i = 1;i <= n;i++) {
        int sum = 0;
        for (int j = i;j <= n;j++) {
            sum += a[j];
            int ch = 1;
            for (int k = 1;k <= tot;k++) {
                if (sum == b[k]) ch = 0;
            }
            if (ch) b[++tot] = sum;
        }
    }
    printf("%d\n", tot);
    return 0;
}