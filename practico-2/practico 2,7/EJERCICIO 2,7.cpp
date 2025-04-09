#include <iostream>
using namespace std;
int main(){

double R;
cout<<"ingrese el valor del radio"<<endl;
cin>>R;
double A=(3.1416*(R*R));
cout<<A<<endl;
if(R=-R)
cout<<" Error: Radius cannot be negative"<<endl;
    return 0;
}