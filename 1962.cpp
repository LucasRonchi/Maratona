#include <bits/stdc++.h>

int main() {
    int n;
    int t;

    scanf("%d",  &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &t);

        t -= 2014;
        if (t > 0) {
            printf("%d A.C.\n", t);
        } else {
            printf("%d D.C.\n", -t+1);
        }
    }

    return 0;
}