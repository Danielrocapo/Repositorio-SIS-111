#include <iostream>
using namespace std;
int main(){

string P1,P2,P3,P4,P5;
cout<<"ingrese cuatro palabras"<<endl;
cin>>P1>>P2>>P3>>P4>>P5;

string PC="";
PC += P1[0];
PC += P2[0];
PC += P3[0];
PC += P4[0];
PC += P5[0];

cout<<PC<<endl;

if (P1[0]==P5[0]){
cout<<"hemos encontrado algo"<<endl;
}else{
    cout<<"aun no hay suerte"<<endl;
}
    return 0;
}