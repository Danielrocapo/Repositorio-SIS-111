#include <iostream>
using namespace std;
int main(){
    int edad,anos;
    cout<<"ingrese su edad y anos de experiencia"<<endl;
    cin>>edad>>anos;
    
    if (edad < 18 ){
        cout<<"salte de mi empresa loco"<<endl;
    }else if (edad >= 18 && anos>=0 && anos<3 ){
        cout<<"coordinador senior"<<endl;
    }else if (edad >= 18 && anos>=3 && anos<5){
        cout<<"director de proyecto"<<endl;
    }else if (edad>=18 && anos>=5){
        cout<<"director senior"<<endl;
    }
 
    

    return 0;
}