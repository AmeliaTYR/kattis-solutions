// Planina

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b, i;
    cin >> a; 
    b = 2;
    for (i = 0; i < a; i++){
        b += pow(2,i);
    }
    cout << b * b;
    

    return 0;
}