#include <bits/stdc++.h>


int main() {
    int n;
    char r[50], s[50];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf(" %s %s", r, s);
        
        if (
            (strcmp(r, "tesoura") == 0 &&
             (strcmp(s, "papel") == 0 || strcmp(s, "lagarto") == 0)) ||

            (strcmp(r, "papel") == 0 &&
             (strcmp(s, "pedra") == 0 || strcmp(s, "Spock") == 0)) ||

            (strcmp(r, "pedra") == 0 &&
             (strcmp(s, "lagarto") == 0 || strcmp(s, "tesoura") == 0)) ||

            (strcmp(r, "lagarto") == 0 &&
             (strcmp(s, "spock") == 0 || strcmp(s, "papel") == 0)) ||

            (strcmp(r, "spock") == 0 &&
             (strcmp(s, "tesoura") == 0 || strcmp(s, "pedra") == 0))
        ) {
            printf("rajesh\n");
            continue;
        }

        if (
            (strcmp(s, "tesoura") == 0 &&
             (strcmp(r, "papel") == 0 || strcmp(r, "lagarto") == 0)) ||

            (strcmp(s, "papel") == 0 &&
             (strcmp(r, "pedra") == 0 || strcmp(r, "Spock") == 0)) ||

            (strcmp(s, "pedra") == 0 &&
             (strcmp(r, "lagarto") == 0 || strcmp(r, "tesoura") == 0)) ||

            (strcmp(s, "lagarto") == 0 &&
             (strcmp(r, "spock") == 0 || strcmp(r, "papel") == 0)) ||

            (strcmp(s, "spock") == 0 &&
             (strcmp(r, "tesoura") == 0 || strcmp(r, "pedra") == 0))
        ) {
            printf("sheldon\n");
            continue;
        }

        printf("empate\n");
    }

    return 0;
}