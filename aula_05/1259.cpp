#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    int num;
    int pares[100010];
    int impares[100010];
    int p = 0;
    int i = 0;

    scanf("%d", &n);
    for (int j = 0; j < n; j++) {
        scanf("%d", &num);

        if (num % 2 == 0) {
            pares[p] = num;
            p++;
        } else {
            impares[i] = num;
            i++;
        }
    }

    sort(pares, pares+p);
    sort(impares, impares+i);

    for (int j = 0; j < p; j++) {
        printf("%d\n", pares[j]);
    }

    if (i > 1) {
        for (int j = i-1; j >= 0; j--) {
            printf("%d\n", impares[j]);
        }
    }

    return 0;
}
