#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, b, aux, controle;
    vector<int> bolas;
    int tem[200];

    scanf("%d %d", &n, &b);
    while (n != 0) {
        bolas.clear();
        for (int i = 0; i < b; i++) {
            scanf("%d", &aux);
            bolas.push_back(aux);
        }

        memset(tem, 0, sizeof(tem));

        for(int i = 0; i < b; i++){
            for (int j = 0; j < i; j++) {
                tem[abs(bolas[i] - bolas[j])]++;
            }
        }

        controle = 1;
        for (int i = 1; i <= n; i++) {
            if (tem[i] == 0) {
                printf("N\n");
                controle = 0;
                break;
            }
        }

        if (controle) {
            printf("Y\n");
        }

        scanf("%d %d", &n, &b);
    }

    return 0;
}
