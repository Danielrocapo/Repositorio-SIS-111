#include <iostream>
using namespace std;

int main() {
    int numero;

    
    cout << "Ingrese un número entero no negativo: ";
    cin >> numero;

    
    if (numero < 0) {
        cout << "El número debe ser no negativo. Inténtelo de nuevo." << endl;
        return 1; 
    }

    
    while (numero > 0) {
        
        int n2,n1;
        n2= numero %10;
        n1=numero/10;
        cout << "La suma de los dígitos es: " << n2 + n1 << endl;   
        break;
    }

    
    

    return 0;
}
