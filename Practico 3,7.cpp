#include <iostream>
using namespace std;

int main() {
    int n;
    double suma = 0;

    
    cin >> n;

    
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            suma -= 1.0 / i; 
        } else {
            suma += 1.0 / i; 
        }
    }

    
    cout << suma << endl;

    return 0;
}
