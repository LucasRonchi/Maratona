#include <bits/stdc++.h>


int main() {
    int unidade, centavo, quantidade;

    scanf("%d.%d", &unidade, &centavo);

    printf("NOTAS:\n");
    quantidade = unidade / 100;
    unidade = unidade % 100;
    printf("%d nota(s) de R$ 100.00\n", quantidade);
    quantidade = unidade / 50;
    unidade = unidade % 50;
    printf("%d nota(s) de R$ 50.00\n", quantidade);
    quantidade = unidade / 20;
    unidade = unidade % 20;
    printf("%d nota(s) de R$ 20.00\n", quantidade);
    quantidade = unidade / 10;
    unidade = unidade % 10;
    printf("%d nota(s) de R$ 10.00\n", quantidade);
    quantidade = unidade / 5;
    unidade = unidade % 5;
    printf("%d nota(s) de R$ 5.00\n", quantidade);
    quantidade = unidade / 2;
    unidade = unidade % 2;
    printf("%d nota(s) de R$ 2.00\n", quantidade);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", unidade);
    quantidade = centavo / 50;
    centavo = centavo % 50;
    printf("%d moeda(s) de R$ 0.50\n", quantidade);
    quantidade = centavo / 25;
    centavo = centavo % 25;
    printf("%d moeda(s) de R$ 0.25\n", quantidade);
    quantidade = centavo / 10;
    centavo = centavo % 10;
    printf("%d moeda(s) de R$ 0.10\n", quantidade);
    quantidade = centavo / 5;
    centavo = centavo % 5;
    printf("%d moeda(s) de R$ 0.05\n", quantidade);
    quantidade = centavo / 1;
    printf("%d moeda(s) de R$ 0.01\n", quantidade);

    return 0;
}
