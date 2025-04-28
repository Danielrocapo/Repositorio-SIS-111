#include <iostream>
#include <string> 
using namespace std;

int main() {
    int decimal;
    cin >> decimal;  

   


    string binaro = "";
  
    while (decimal > 0) {
        int resto = decimal % 2;      
        binaro = to_string(resto) + binaro;  
        decimal /= 2;                
    }

    cout << binaro << endl;  
    return 0;
}
