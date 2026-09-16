#include <bits/stdc++.h>


int main() {
    int n;
    int a[3], b[3];
    int pontos_a = 0;
    int pontos_b = 0;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        int maior_a = 0;
        int maior_b = 0;

        scanf("%d %d %d %d %d %d", a, a+1, a+2, b, b+1, b+2);

        for (int i = 0; i < 3; i++) {
            if (a[i] <= 3) {
                a[i] += 20;
            } else if (a[i] == 11) {
                a[i]++;
            } else if (a[i] == 12) {
                a[i]--;
            }

            if (b[i] <= 3) {
                b[i] += 20;
            } else if (b[i] == 11) {
                b[i]++;
            } else if (b[i] == 12) {
                b[i]--;
            }

            if (a[i] >= b[i]) {
                maior_a++;
            } else {
                maior_b++;
            }
        }

        if (maior_a >= maior_b) {
            pontos_a++;
        } else {
            pontos_b++;
        }
    }
    printf("%d %d\n", pontos_a, pontos_b);

    return 0;
}
