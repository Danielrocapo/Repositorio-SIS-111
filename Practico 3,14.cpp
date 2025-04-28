#include <iostream>
using namespace std;
int main(){
    
    string num;
    cin>>num;
    
    int longitud=num.length();
    bool espalindromo = true;
    
    for(int i=0; i<longitud;i++){
        
        if(num[i]!= num[longitud -i -1]){
            espalindromo = false;
            break;
        }
    }

    if (espalindromo) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }    
    
        
    
    

    return 0;
}