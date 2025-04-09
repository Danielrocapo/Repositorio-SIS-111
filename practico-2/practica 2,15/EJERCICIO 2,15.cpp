#include <iostream>
using namespace std;
int main(){
    int a=51;
    int b=876;
    int c=235;
    
    cout<<"Los valores son: a=" <<a<< " b="<<b<< " y c="<<c <<endl;
    cout<<" Permutamos: a>b, b>c, c>a"<<endl;
    
    int temp=a;
    
    a=c;
    b=temp;
    c=b;
    cout<<"Los valores despues de la permutacion son: a ="<<a <<"b ="<<b <<" c=" <<c<<endl;

    return 0;
}