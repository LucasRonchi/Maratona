#include <bits/stdc++.h>
using namespace std;

int sortando(string a, string b) {
    return a.size() > b.size();
}

int main() {
    int n;
    cin >> n;
    cin.ignore();

    while (n--) {
        string linha;
        getline(cin, linha);

        stringstream ss(linha);
        vector<string> palavras;
        string palavra;

        while (ss >> palavra) {
            palavras.push_back(palavra);
        }

        stable_sort(palavras.begin(), palavras.end(), sortando);

        cout << palavras[0];
        for (int i = 1; i < palavras.size(); i++) {
            cout << ' ' << palavras[i];
        }

        cout << '\n';
    }

    return 0;
}