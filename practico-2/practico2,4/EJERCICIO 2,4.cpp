
#include <iostream>
using namespace std;
int main(){

float N,A,B,X,Y;
cout<<"ingrese 5 numeros"<<endl;
cin>>N>>A>>B>>X>>Y;
if (N>B) {
float descy=(N-(N*(Y/100)));
cout<<descy<<endl;


}else if (N>A){
float descx=(N-(N*(X/100)));
cout<<descx<<endl; 
}else{
    cout<<N<<endl;
}
    return 0;
}