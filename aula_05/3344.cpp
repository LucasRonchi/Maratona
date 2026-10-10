#include <bits/stdc++.h>


int main () {
    int x;
    int val_uni[10] = {0, 3, 3, 5, 4, 4, 3, 5, 5, 4};
    int val_dec[11] = {0, 3, 6, 6, 5, 5, 5, 7, 6, 6, 11};
    int val_tem[10] = {0, 6, 6, 8, 8, 7, 7, 9, 8, 8};

    scanf("%d", &x);
    
    for(int i = 0; i < 1000; i++) {
        if (x >= 10 || x <= 20) {
            int uni = x % 10;
            int dec = (x - uni) / 10;

            x = val_uni[uni];
            x += val_dec[dec];
            if (val_uni[uni] && val_dec[dec]) {
                x++;
            }
        } else {
            x = val_tem[x-10];
        }
    }
    printf("%d\n", x);

    return 0;
}
