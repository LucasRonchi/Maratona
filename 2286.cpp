#include <bits/stdc++.h>


int main () {
    int n = 1;
    char nome_par[50];
    char nome_impar[50];
    int par;
    int impar;
    int j=0;

    while (++j) {
        scanf("%d", &n);
        if (n == 0){
            break;
        }

        scanf(" %s", nome_par);
        scanf(" %s", nome_impar);
        
        printf("Teste %d\n", j);

        for (int i = 0; i < n; i++) {
            scanf("%d %d", &par, &impar);

            if ((par + impar) % 2 == 0){
                printf("%s\n", nome_par);
            } else {
                printf("%s\n", nome_impar);
            }
        }
        printf("\n");
    }
    

    return 0;
}
