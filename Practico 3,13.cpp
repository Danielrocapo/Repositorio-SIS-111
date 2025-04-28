#include <iostream>
#include <cmath>  
using namespace std;

int main(){
    int N, k;
    cin >> N >> k;  
    
    int sum = 0;
    
    for (int i = 1; i <= N; i++){
        
        sum += pow(i, k);
    }
    
    cout << sum << endl;
    return 0;
}
