#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, x;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &x);

        if (x == 2) {
            printf("Prime\n");
        } else if (x % 2 == 0) {
            printf("Not Prime\n");
        } else {
            int controle = 1, limit = sqrt(x);

            for(int j = 3; j <= limit; j+=2) {
                if (x % j == 0) {
                    printf("Not Prime\n");
                    controle = 0;
                    break;
                }
            }

            if (controle) {
                printf("Prime\n");
            }
        }
    }

    return 0;
}
