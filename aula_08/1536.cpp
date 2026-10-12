#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    int t1, t2, tt1, tt2;

    cin >> n;
    for (int i = 0; i < n; i++) {
        scanf("%d x %d\n %d x %d", &t1, &t2, &tt2, &tt1);
        
        if (t1 + tt1 > t2 + tt2) {
            cout << "Time 1\n";
        } else if (t1 + tt1 < t2 + tt2) {
            cout << "Time 2\n";
        } else if (t2 > tt1) {
            cout << "Time 2\n";
        } else if (t2 < tt1) {
            cout << "Time 1\n";
        } else {
            cout << "Penaltis\n";
        }
    }

    return 0;
}
