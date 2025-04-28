#include <iostream>

using namespace std;

int main() {
    string cadena, sinEspacios = "";
    getline(cin, cadena); 

    
    for (int i = 0; i < cadena.length(); i++) {
        if (cadena[i] != ' ') {
            sinEspacios += cadena[i];
        }
    }

   
    int longitud = sinEspacios.length();
    bool esPalindromo = true;
    for (int i = 0; i < longitud / 2; i++) {
        if (sinEspacios[i] != sinEspacios[longitud - i - 1]) {
            esPalindromo = false;
            break;
        }
    }

   
    if (esPalindromo) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
