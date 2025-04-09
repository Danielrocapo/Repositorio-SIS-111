#include <iostream>
using namespace std;
int main(){

int ND;
cout<<"ingrese el numero del dia"<<endl;
cin>>ND;
switch (ND){
    case 1:
    cout<<"lunes"<<endl;
    break;
    case 2:
    cout<<"martes"<<endl;
    break;
    case 3:
    cout<<"miercoles"<<endl;
    break;
    case 4:
    cout<<"jueves"<<endl;
    break;
    case 5:
    cout<<"viernes"<<endl;
    break;
    case 6:
    cout<<"sabado"<<endl;
    break;
    case 7:
    cout<<"domingo"<<endl;
    break;
}

    return 0;
}