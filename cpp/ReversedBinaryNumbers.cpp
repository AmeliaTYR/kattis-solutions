// Reversed Binary Numbers

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a[30], n, i, b;
    cin >> n; // take in the number
    
    for (i = 0; n>0; i++){
        a[i] = n%2; 
        n = n/2;
    }
    
    i--; // i is now the number of digits
    b = i;
    for(; i>=0; i--){
        n += a[b-i]*pow(2,i);
    }
    
    cout << n;
    return 0;
}