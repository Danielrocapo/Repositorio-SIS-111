#include <iostream>
using namespace std;
int main(){

int seg;
cout<<"ingrese la cantidad de segundos"<<endl;
cin>>seg;
if (seg <0){
cout<<"Error: Input seconds cannot be negative"<<endl;
}else{
int hours=(seg/3600);

int mins=(seg%3600)/60;

int segs=(seg%60);

cout<<hours<<":"<<mins<<":"<<segs;
}
    return 0;
}