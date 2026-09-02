#include <bits/stdc++.h>


int main() {
    long long int n, m, fat[30];

    fat[0] = 1;
    fat[1] = 1;
    for (int i = 2; i <= 21; i++) {
        fat[i] = fat[i-1] * i;
    }

    while (2 == scanf("%ld %ld", &n, &m)) {
        printf("%lld\n", fat[n] + fat[m]);
    }

    return 0;
}
