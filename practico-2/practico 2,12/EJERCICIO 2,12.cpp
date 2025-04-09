#include <iostream>
using  namespace std;
int main(){
    int pisostr;
    string colortr;
    string color1,color2,color3;
    int pisos1,pisos2,pisos3;
    cout<<"pongan los datos de los testigos"<<endl;
    cin>>color1>>pisos1>>color2>>pisos2>>color3>>pisos3;
    cin>>colortr>>pisostr;
   
    if (colortr==color1 || colortr=="?" && pisostr==pisos1 || pisostr != -1) {
        cout<<"1"<<endl;
    }if (colortr==color2 || colortr=="?" && pisostr==pisos2 || pisostr !=-1) {
        cout<<"2"<<endl;
    }if (colortr==color3 || colortr=="?" && pisostr==pisos3 || pisostr != -1) {
        cout<<"3"<<endl;
    }
        
    
    
    return 0;
}