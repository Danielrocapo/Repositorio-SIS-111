#include <iostream>
using namespace std;
int main(){
    
    int num1,num2;
    cin>>num1>>num2;
    
    int res=0; 
    while (num1 != 0){
        num1 = num1 - num2;
        res++;
        
    }
    cout<<res;
    cout<<num1;

    return 0;
}