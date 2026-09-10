#include <bits/stdc++.h>


int main() {
    char cpf[20];
    int a1, a2, a3;
    int a4, a5, a6;
    int a7, a8, a9;
    int b1, b2;
    int soma;

    while (scanf("%s", cpf) != EOF)
    {
        a1 = cpf[0] - '0';
        a2 = cpf[1] - '0';
        a3 = cpf[2] - '0';

        a4 = cpf[4] - '0';
        a5 = cpf[5] - '0';
        a6 = cpf[6] - '0';

        a7 = cpf[8] - '0';
        a8 = cpf[9] - '0';
        a9 = cpf[10] - '0';

        b1 = cpf[12] - '0';
        b2 = cpf[13] - '0';

        soma = a1 +
            a2*2 +
            a3*3 +
            a4*4 +
            a5*5 +
            a6*6 +
            a7*7 +
            a8*8 +
            a9*9;

        if (b1 != soma%11%10) {
            printf("CPF invalido\n");
            continue;
        }
        
        soma = a1*9 +
            a2*8 +
            a3*7 +
            a4*6 +
            a5*5 +
            a6*4 +
            a7*3 +
            a8*2 +
            a9;
        if (b2 != soma%11%10) {
            printf("CPF invalido\n");
            continue;
        }

        printf("CPF valido\n");
    }
    

    return 0;
}
