#include <bits/stdc++.h>


int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0, j = 1; i < n; i++, j+=4) {
        printf("%d %d %d PUM\n", j, j+1, j+2);
    }

    return 0;
}
