#include <iostream>
using namespace std;
int main(){

    int torta;
    int gente=0;
    
    while( gente<10){
        cin>>torta;
        if(torta==1){
            cout<<"Om-nom-nom :P"<<endl;
        }else if (torta==0){
            cout<<"Sin pastel :("<<endl;
        }

        gente++;
    }
    

    return 0;
}