#include <iostream>
using namespace std;
int main(){
    
    double u = 1.0;
    double v = 1.0;
    cout << "U0 = " << u << endl;
    
    
    for (int i = 1; i <= 10; i++){
        u = u / i;
        v += u;
        cout << "U" << i << " = " <<  u << " V"<<i<<"="<< v<< endl;
    }

    return 0;
}