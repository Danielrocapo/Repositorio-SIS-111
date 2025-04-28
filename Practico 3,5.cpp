#include <iostream>
using namespace std;

int main() {
    int n, k;

    
    cout << "Ingrese el primer día del mes (1 para lunes, 7 para domingo): ";
    cin >> n;
    cout << "Ingrese el número de días del mes: ";
    cin >> k;

    
    for (int i = 1; i < n; i++) {
        cout << "   ";
    }

    
    for (int i = 1; i <= k; i++) {
        
        if (i < 10) {
            cout << " " << i << " ";
        } else {
            cout << i << " ";
        }

        
        if ((n + i - 1) % 7 == 0) {
            cout << endl;
        }
    }

    cout << endl; 
    return 0;
}
