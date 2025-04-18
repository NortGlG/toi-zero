#include<stdio.h>
#include<string.h>
char s[100];
int main() {
    char c;
    scanf(" %c %s", &c, s);
    int dig = (strlen(s) == 4) && (s[0] == '4') && (s[1] == '5') && (s[2] == '6') && (s[3] == '7');
    if (c == 'H' && dig) printf("safe unlocked");
    else if (c == 'H') printf("safe locked - change digit");
    else if (dig) printf("safe locked - change char");
    else printf("safe locked");
    return 0;
}