#include <bits/stdc++.h>


int main() {
    char linha[10000];
    
    while (scanf("%s", linha) != EOF) {
        int pilha = 0;
        int correct = 1;
        int tamanho = strlen(linha);

        for(int i = 0; i < tamanho; i++) {
            if (linha[i] == '(') {
                pilha++;
            } else if (linha[i] == ')') {
                if (pilha == 0) {
                    correct = 0;
                    break;
                }
                pilha--;
            }
        }

        if (correct && pilha == 0) {
            printf("correct\n");
        } else {
            printf("incorrect\n");
        }
    }
}