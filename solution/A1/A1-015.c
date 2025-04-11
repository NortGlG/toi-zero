#include<stdio.h>
#include<string.h>
char name[100], surname[100], age[100];
int main() {
    scanf("%s %s %s", name, surname, age);
    int l1 = strlen(name), l2 = strlen(surname), l3 = strlen(age);
    if (l1 > 5 && l2 > 5) {
        printf("%c%c%c%c", name[0], name[1], surname[l2 - 1], age[l3 - 1]);
    }
    else {
        printf("%c%s%c", name[0], age, surname[l2 - 1]);
    }
}