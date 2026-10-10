#include <bits/stdc++.h>


int main() {
    int k, n, m, x, y;

    while (1) {
        scanf("%d", &k);
        if (k == 0) {
            return 0;
        }

        scanf("%d %d", &n, &m);

        for (int i = 0; i < k; i++) {
            scanf("%d %d", &x, &y);
            
            x -= n;
            y -= m;
            
            if (x == 0 || y == 0){
                printf("divisa\n");
            } else if (y > 0) {
                if (x > 0) {
                    printf("NE\n");
                } else {
                    printf("NO\n");
                }
            } else {
                if (x > 0) {
                    printf("SE\n");
                } else {
                    printf("SO\n");
                }
            }
            
        }

    }
    return 0;
}
