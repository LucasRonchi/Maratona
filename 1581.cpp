#include <bits/stdc++.h>


int main(){
    int n;
    int k;
    
    scanf("%d\n", &n);
    
    for(int i = 0; i < n; i++) {
        char ing = 0;
        char first[30];
        char last[30];
        first[0] = '\0';
        last[0] = '\0';
        int k;
        scanf("%d\n", &k);

        for (int j = 0; j < k; j++) {
            if (j == 0) {
                ing = 0;
                scanf("%s", first);

            } else if (j == k-1) {
                scanf("%s", last);

                if (ing || strcmp(first, last)) {
                    printf("ingles\n");
                } else {
                    printf("%s\n", first);
                }
            } else {
                scanf("%s", last);

                if (ing || strcmp(first, last)) {
                    ing = 1;
                }
            }
        }
    }



    return 0;
}
