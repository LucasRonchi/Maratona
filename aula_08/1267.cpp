#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, d, controle;
    
    scanf("%d %d", &n, &d);
    
    while (n != 0 || d != 0) {
        vector<int> alunos(100);

        for(int i = 0; i < d; i++) {
            for(int j = 0; j < n; j++) {
                cin >> controle;
                if (controle) {
                    alunos[j]++;
                }
            }
        }

        controle = 1;
        for(int i = 0; i < n; i++) {
            if (alunos[i] == d) {
                printf("yes\n");
                controle = 0;
                break;
            }
        }

        if (controle) {
            printf("no\n");
        }

        scanf("%d %d", &n, &d);
    }

    return 0;
}
