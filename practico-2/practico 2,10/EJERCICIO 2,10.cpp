#include <iostream>
using namespace std;
int main(){
    
    int num1,num2;
    int sum;
    int digits;
    int res;
    
    cout<<"ingrese dos numeros enteros positivos separados por un espacio"<<endl;
    cin>>num1>>num2;
    
    if (num1 > 0 && num2 > 0){
        int sum=num1 + num2;
        int digits=to_string(sum).length();
        int res=digits * sum;
        cout<<"el resultado es "<<res<<endl;
    }else{
        cout<<"0"<<endl;
    }
    


    return 0;
}