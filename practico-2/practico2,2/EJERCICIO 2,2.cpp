/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double A,B,C;
    cout<<"ingrese los coeficientes diferentes de 0"<<endl;
    cin>>A>>B>>C;
    
    if (A!=0){
        double simp=B*B - 4*A*C;
        
        double raiz= sqrt (simp);
        
        double R1=(-B + raiz) / (2 * A);
        double R2=(-B - raiz) / (2 * A);
        
        cout<<R1<<R2<<endl;
    }


    return 0;
}