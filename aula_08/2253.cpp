#include <bits/stdc++.h>
using namespace std;

int main() {
    string senha;

    while (getline(cin, senha)) {
        bool minuscula = false;
        bool maiuscula = false;
        bool numero = false;
        bool valido = true;

        if (senha.size() >= 6 && senha.size() <= 32){
            for (char c : senha) {
                if (c >= 'a' && c <= 'z') {
                    minuscula = true;
                } else if (c >= 'A' && c <= 'Z') {
                    maiuscula = true;
                } else if (c >= '0' && c <= '9') {
                    numero = true;
                } else {
                    valido = false;
                    break;
                }
            }

            if (minuscula && maiuscula && numero && valido) {
                cout << "Senha valida.\n";
            } else {
                cout << "Senha invalida.\n";
            }
        } else {
            cout << "Senha invalida.\n";
        }
    }
    
    return 0;
}
