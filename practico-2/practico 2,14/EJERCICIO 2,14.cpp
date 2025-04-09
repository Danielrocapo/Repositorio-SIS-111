#include <iostream>
using namespace std;
int main(){

    int nudoc;
    cout<<"ingrese el numero de documentos"<<endl;
    cin>>nudoc;
    
    if (nudoc==0 || nudoc<0){
        cout<<"ingrese un numero valido"<<endl;
    }else if (nudoc==1){
        cout<<"se encontro 1 documento"<<endl;
    }else if (nudoc > 1 ){
        cout<<"se encontraron "<<nudoc<<"documentos"<<endl;
    }
    return 0;
}