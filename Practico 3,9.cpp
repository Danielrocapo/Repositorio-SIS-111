#include <iostream>
using namespace std;
int main(){

    string cadena;
    int fs=0;
    cin>>cadena;
    
    for(int i=0; i<cadena.length(); i++){
        if(cadena [i]=='f'){
          fs++; 
        
        }
       
        
     
        
        

        
    }
    if (fs==1){
        cout<<"-1"<<endl;
        
    }else if (fs==0){
        cout<<"-2"<<endl;
    }else{
        cout<<fs<<endl;
    }
    


    return 0;
}