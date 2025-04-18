#include<stdio.h>

int main() {
    int t;
    char m;
    scanf("%d %c", &t, &m);
    if (m == 'C') {
        if (t <= 0) printf("solid");
        else if (t >= 100) printf("gas");
        else printf("liquid");
    }
    else {
        if (t <= 32) printf("solid");
        else if (t >= 212) printf("gas");
        else printf("liquid");
    }
}