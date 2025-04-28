#include <iostream>
using namespace std;

int main() {
    int inicio, fin;

    
    cin >> inicio >> fin;

    
    if (inicio <= 0) {
        cout << "El numero debe de ser positivo y mayor a cero" << endl;
        return 1;
    }
    if (fin < inicio) {
        cout << "El numero de fin no debe de ser menor al inicial" << endl;
        return 1;
    }

    
    for (int num = inicio; num <= fin; num++) {
        int iteraciones = 0;
        int actual = num;

        
        while (actual > 0) {
            if (actual % 3 == 0) {
                actual += 4;  
            } else if (actual % 4 == 0) {
                actual /= 2;  
            } else {
                actual -= 1;  
            }
            iteraciones++;
        }

        
        cout << num << " -> " << iteraciones << " iteraciones" << endl;
    }

    return 0;
}
