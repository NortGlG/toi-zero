#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n < 0) {
        printf("Error : Please input positive number");
        return 0;
    }
    if (n > 9 || n == 0) {
        printf("Error : Out of range");
        return 0;
    }
    if (n == 1) printf("I");
    if (n == 2) printf("II");
    if (n == 3) printf("III");
    if (n == 4) printf("IV");
    if (n == 5) printf("V");
    if (n == 6) printf("VI");
    if (n == 7) printf("VII");
    if (n == 8) printf("VIII");
    if (n == 9) printf("IX");
    return 0;
}