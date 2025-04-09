/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main(){
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    
    string minimo = s1;
    if(s2 < minimo)
        minimo = s2;
    if(s3 < minimo)
        minimo = s3;
    
    cout << minimo;
    return 0;
}