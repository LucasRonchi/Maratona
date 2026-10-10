#include <bits/stdc++.h>


int main() {
    int n, a, cont = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        cont += (a / 3) * 3;
    }

    printf("%d\n", cont);

    return 0;
}