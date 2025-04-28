#include <iostream>

using namespace std;

int main() {
    string frase;
    getline(cin, frase); 

    for (int i = 0; i < frase.length(); i++) {
        if(frase [i] == ' ')
        cout << i << endl;
    }

    return 0;
}
