#include <bits/stdc++.h>


int main() {
    int n, a, b;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        a = i*i;
        b = a*i;
        printf("%d %d %d\n%d %d %d\n", i, a, b, i, a+1, b+1);
    }

    return 0;
}
