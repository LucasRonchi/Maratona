#include <bits/stdc++.h>


int main() {
    int t, t1, t2, h1, m1, h2, m2;

    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
    while (h1 != 0 || m1 != 0 || h2 != 0 || m2 != 0)
    {
        t1 = h1 * 60 + m1;
        t2 = h2 * 60 + m2;
        t = t2 - t1;

        if (t < 0) {
            t += 24 * 60;
        }

        printf("%d\n", t);

        scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
    }

    return 0;
}
