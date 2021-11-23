// Sibice

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num, len, width, height, diag;
    cin >> num;
    cin >> width;
    cin >> height;
    
    diag = sqrt(pow(width, 2) + pow(height, 2));
    
    for(;num > 0; num--){
        cin >> len;
        if (len <= diag){
            cout << "DA\n";
        } else {
            cout << "NE\n";
        }
    }
    
    return 0;
}
