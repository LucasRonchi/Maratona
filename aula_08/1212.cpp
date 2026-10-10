#include <stdio.h>


int main() {
    int a, b, c, s, carry;

    scanf("%d %d", &a, &b);

    while (a != 0 || b != 0) {
        c = 0;
        carry = 0;

        while (a != 0 || b != 0) {
            s = (a % 10) + (b % 10) + carry;

            a /= 10;
            b /= 10;

            if (s >= 10) {
                c++;
                carry = 1;
            } else {
                carry = 0;
            }
        }

        if (c == 0) {
            printf("No carry operation.\n");
        } else if (c == 1) {
            printf("1 carry operation.\n");
        } else {
            printf("%d carry operations.\n", c);
        }

        scanf("%d %d", &a, &b);
    }

    return 0;
}