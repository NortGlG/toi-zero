#include<stdio.h>

int main() {
    int h1, h2, b1, b2, x, y;
    scanf("%d %d %d %d", &h1, &h2, &b1, &b2);
    scanf("%d %d", &x, &y);
    int mx = 0;
    for (int same = 0;same <= x;same++) { // same duplicate order
        for (int j = 0;j <= h1;j++) { // use j-th white robot
            if (j > same || j > b1 || (same - j) > h2 || (same - j) > b2) continue;
            int diff = 0;
            // use (same - j) black robot
            int h1_ = h1 - j, b1_ = b1 - j;
            int h2_ = h2 - (same - j), b2_ = b2 - (same - j);
            if (h1_ < b2_) diff += h1_;
            else diff += b2_;
            if (h2_ < b1_) diff += h2_;
            else diff += b1_;
            if (diff > y) diff = y;
            if (same + diff > mx) {
                mx = same + diff;
            }
        }
    }
    printf("%d\n", mx);
    return 0;
}