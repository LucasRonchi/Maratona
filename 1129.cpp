#include <bits/stdc++.h>


int main() {
    int n, a, b, c, d, e;

    scanf("%d", &n);

    while (n > 0) {
        for (int i = 0; i < n; i++) {
            int resp, valida = 0;

            scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

            if (a <= 127) {
                valida++;
                resp = 'A';
            }
            if (b <= 127) {
                valida++;
                resp = 'B';
            }
            if (c <= 127) {
                valida++;
                resp = 'C';
            }
            if (d <= 127) {
                valida++;
                resp = 'D';
            }
            if (e <= 127) {
                valida++;
                resp = 'E';
            }            
            
            if (valida == 1) {
                printf("%c\n", resp);
            } else {
                printf("*\n");
            }
        }

        scanf("%d", &n);
    }

    return 0;
}
