#include <bits/stdc++.h>
using namespace std;


int main() {
    string s;
    set<string> joias;

    while (cin >> s) {
        joias.insert(s);
    }

    printf("%d\n", (int)joias.size());

    return 0;
}
