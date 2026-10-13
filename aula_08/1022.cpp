#include <bits/stdc++.h>
using namespace std;


int main() {
    int x, n, d, n1, d1, d2, n2;
    char opc;

    scanf("%d", &x);
    for(int i = 0; i < x; i++) {
        scanf("%d / %d %c %d / %d", &n1, &d1, &opc, &n2, &d2);

        if (opc == '+') {
            n = n1*d2 + n2*d1;
            d = d1*d2;
        } else if (opc == '-') {
            n = n1*d2 - n2*d1;
            d = d1*d2;
        } else if (opc == '*') {
            n = n1*n2;
            d = d1*d2;
        } else {
            n = n1*d2;
            d = n2*d1;
        }

        printf("%d/%d = ", n, d);
        
        for (int i = 2; i <= abs(n) && i <= abs(d); i++) {
            while ((n % i == 0) && (d % i == 0)) {
                n /= i;
                d /= i;
            }
        }

        printf("%d/%d\n", n, d);
    }

    return 0;
}
