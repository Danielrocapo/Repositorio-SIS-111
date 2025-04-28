#include <iostream>

using namespace std;

int main() {
    string frase;
    getline(cin, frase); 

    string palabra = ""; 
    for (int i = 0; i < frase.length(); i++) {
        if (frase[i] != ' ') { 
            palabra += frase[i];
        } else { 
            cout << "[" << palabra << "]" << endl;
            palabra = ""; 
        }
    }
   
    cout << "[" << palabra << "]" << endl;

    return 0;
}
