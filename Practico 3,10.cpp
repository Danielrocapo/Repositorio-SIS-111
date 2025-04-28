#include <iostream>
using namespace std;
int main(){
    int resultado;
    int n1,n2;
    cin>>n1>>n2;
    
    while(n2!=0 ){
        resultado=n1%n2;
        n1=n2;
        n2=resultado;
    }
    cout<<n1<<endl;
    return 0;
}