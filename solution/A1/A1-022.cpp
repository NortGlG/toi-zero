#include<stdio.h>

int main() {
    int d, m;
    scanf("%d %d", &d, &m);
    if (m == 1 && d >= 20) m++;
    else if (m == 2 && d >= 19) m++;
    else if (m == 3 && d >= 21) m++;
    else if (m == 4 && d >= 20) m++;
    else if (m == 5 && d >= 21) m++;
    else if (m == 6 && d >= 22) m++;
    else if (m == 7 && d >= 23) m++;
    else if (m == 8 && d >= 23) m++;
    else if (m == 9 && d >= 23) m++;
    else if (m == 10 && d >= 24) m++;
    else if (m == 11 && d >= 22) m++;
    else if (m == 12 && d >= 22) m = 1;
    if (m == 1) printf("capricorn");
    if (m == 2) printf("aquarius");
    if (m == 3) printf("pisces");
    if (m == 4) printf("aries");
    if (m == 5) printf("taurus");
    if (m == 6) printf("gemini");
    if (m == 7) printf("cancer");
    if (m == 8) printf("leo");
    if (m == 9) printf("virgo");
    if (m == 10) printf("libra");
    if (m == 11) printf("scorpio");
    if (m == 12) printf("sagittarius");
}