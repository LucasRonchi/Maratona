#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, num, m;
    
    cin >> n;
    vector<int> fila(n);

    for (int i = 0; i < n; i++) {
        cin >> fila[i];
    }
    
    cin >> m;
    set<int> saiu;

    for (int i = 0; i < m; i++) {
        scanf("%d", &num);

        saiu.insert(num);
    }

    for (int i = 0; i < n; i++) {
        if (saiu.find(fila[i]) == saiu.end()) {
            cout << fila[i];

            if (i != n - 1){
                cout << " ";
            } else {
                cout << "\n";
            }
        }
    }
}
