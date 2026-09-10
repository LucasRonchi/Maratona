#include <bits/stdc++.h>


int main () {
    float a, b, c;

    scanf("%f %f %f", &a, &b, &c);

    float menor, medio, maior;

    if (a < b) {
        if (b < c) {
            menor = a;
            medio = b;
            maior = c;
        } else if (a < c) {
            menor = a;
            medio = c;
            maior = b;
        } else {
            menor = c;
            medio = a;
            maior = b;
        }
    } else {
        if (a < c) {
            menor = b;
            medio = a;
            maior = c;
        } else if (b < c) {
            menor = b;
            medio = c;
            maior = a;
        } else {
            menor = c;
            medio = b;
            maior = a;
        }
    }

    if (menor + medio <= maior) {
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }

    float quad_soma = menor*menor + medio*medio;
    float quad_maior = maior*maior;

    if (quad_soma == quad_maior) {
        printf("TRIANGULO RETANGULO\n");
    } else if (quad_soma < quad_maior) {
        printf("TRIANGULO OBTUSANGULO\n");
    } else {
        printf("TRIANGULO ACUTANGULO\n");
    }

    if (menor == medio) {
        if (medio == maior) {
            printf("TRIANGULO EQUILATERO\n");
        } else {
            printf("TRIANGULO ISOSCELES\n");
        }
    } else if (menor == maior || medio == maior) {
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}