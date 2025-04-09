#include <iostream>
using namespace std;
int main(){

    char ch;
    cout << "Ingrese un caracter:" << endl;
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        cout << "lower-case alphabet" << endl;  // Letra mayúscula
    } else if (ch >= 'a' && ch <= 'z') {
        cout << "upper-case alphabet" << endl;  // Letra minúscula
    } else {
        cout << "not an alphabet" << endl;  // No es una letra
    }


    return 0;
}