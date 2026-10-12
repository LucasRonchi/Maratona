#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, d;
    double c;

    cin >> n;

    for (int i = 0; i < n; i++) {
        d = 0;
        cin >> c;

        while (c > 1) {
            d++;
            c /= 2;
        }

        printf("%d dias\n", d);
    }

    return 0;
}
