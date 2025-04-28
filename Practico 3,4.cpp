#include <iostream>
using namespace std;

int main() {
    int numero, factorial = 1;

   
    cout << "Ingrese un número no negativo (máximo 12): ";
    cin >> numero;

    
    if (numero < 0) {
        cout << "El número es negativo. Inténtelo de nuevo." << endl;
        return 1; 
    }

    
    for (int i = 1; i <= numero; i++) {
        factorial *= i;
    }

   
    cout <<  numero   << endl;
    cout<<  factorial << endl;
    return 0;
}
