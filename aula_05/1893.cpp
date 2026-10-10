#include <bits/stdc++.h>


int main () {
    int d1, d2;

    scanf("%d %d", &d1, &d2);

    if (d2 <= 2) {
        printf("nova\n");
    } else if (d2 >= 97) {
        printf("cheia\n");
    } else if (d1 <= d2) {
        printf("crescente\n");
    } else {
        printf("minguante\n");
    }

    return 0;
}
