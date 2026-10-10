#include <bits/stdc++.h>


int main() {
    int n, m;
    int ids[10001];
    int id;

    
    while (1)
    {
        scanf("%d %d", &n, &m);
        if (n == 0 && m ==0) {
            break;
        }

        memset(ids, 0, sizeof(ids));

        for (int i = 0; i < n*m; i++){
            scanf("%d", &id);
            ids[id]++;
        }
            
        int primeiro = 0;
        for (int i = 1; i < 10001; i++) {
            if (ids[i] > primeiro) {
                primeiro = ids[i];
            }
        }
        int segundo = 0;
        for (int i = 1; i < 10001; i++) {
            if (ids[i] > segundo && ids[i] != primeiro) {
                segundo = ids[i];
            }
        }
        for (int i = 1; i < 10001; i++) {
            if (ids[i] == segundo) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    return 0;
}
