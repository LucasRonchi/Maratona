#include <bits/stdc++.h>

int main() {
    int n;
    char a[1000];
    char b[1000];
    char len_a;
    char len_b;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s %s", &a, &b);
        len_a = strlen(a);
        len_b = strlen(b);

        if (len_a < len_b) {
            printf("nao encaixa\n");
        } else {
            if (0 == strcmp(&a[len_a - len_b], b)) {
                printf("encaixa\n");
            } else {
                printf("nao encaixa\n");
            }
        }
    }

    return 0;
}
