#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;        
    int candidate = 2;     

    while (count < n) {
        bool esPrimo = true;
        
        
        for (int i = 2; i < candidate; i++) {
            if (candidate % i == 0) {
                esPrimo = false;
                break;
            }
        }

       
        if (esPrimo) {
            cout << candidate << " ";
            count++; 
        }
        candidate++; 
    }
    
    cout << endl;
    return 0;
}
