#include <bits/stdc++.h>


int main() {
    int start, end, hours;

    scanf("%d %d", &start, &end);

    if (start < end) {
        hours = end - start;
    } else {
        hours = end + 24 - start;
    }
    
    printf("O JOGO DUROU %d HORA(S)\n", hours);

    return 0;
}
