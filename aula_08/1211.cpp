#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, c;
    int antiga;
    
    while (cin >> n) {
        vector<string> tel(n);
        c = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> tel[i];
        }

        sort(tel.begin(), tel.end());

        antiga = 0;
        for (int i = 1; i < n; i++) {

            for (int j = 0; j < tel[i].size(); j++) {
                if (tel[antiga][j] == tel[i][j]) {
                    c++;
                } else {
                    break;
                }
            }

            antiga = i;
        }

        cout << c << "\n";
    }

    return 0;
}
