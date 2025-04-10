#include<stdio.h>

int main() {
    int age;
    char state;
    scanf("%d %c", &age, &state);
    if (age < 18 || state == 's' || state == 'S') printf("20");
    else printf("50");
    return 0;
}