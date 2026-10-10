#include <bits/stdc++.h>


int main () {
    int p;
    int soma;
    
    scanf("%d", &p);

    if (p < 10) {
        soma = p;
    } else if (p < 100) {
        soma = 9 + 2*(p-9);
    } else if (p < 1000) {
        soma = 9 + 2*90 + 3*(p-99);
    } else if (p < 10000) {
        soma = 9 + 2*90 + 3*900 + 4*(p-999);
    } else if (p < 100000) {
        soma = 9 + 2*90 + 3*900 + 4*9000 + 5*(p-9999);
    } else if (p < 1000000) {
        soma = 9 + 2*90 + 3*900 + 4*9000 + 5*90000 + 6*(p-99999);
    } else if (p < 10000000) {
        soma = 9 + 2*90 + 3*900 + 4*9000 + 5*90000 + 6*900000 + 7*(p-999999);
    } else if (p < 100000000) {
        soma = 9 + 2*90 + 3*900 + 4*9000 + 5*90000 + 6*900000 + 7*9000000 + 8*(p-9999999);
    }

    printf("%d\n", soma);

    return 0;
}
