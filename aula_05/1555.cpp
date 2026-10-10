#include <bits/stdc++.h>


int main() {
    int n;
    int x;
    int y;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);

        int r = 3*3*x*x + y*y;
        int b = 2*x*x + 5*5*y*y;
        int c = -100*x + y*y*y;
        
        if (r > b && r > c) {
            printf("Rafael ganhou\n");
        } else if (b > c) {
            printf("Beto ganhou\n");
        } else {
            printf("Carlos ganhou\n");
        }
    }
    return 0;
}
