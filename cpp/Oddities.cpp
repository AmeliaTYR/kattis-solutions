// Oddities

#include <iostream>
using namespace std;

int main (){
    int n, num;
    cin >> n;
    
    for(;n>0;n--){
        cin >> num;
        if (num < 0){
            num *= -1;
            if (num%2){
                cout << -1*num << " is odd" << endl;
            } else {
                cout << -1*num << " is even" << endl;
            }
        } else {
                if (num%2){
                cout << num << " is odd" << endl;
            } else {
                cout << num << " is even" << endl;
            }
        }
    }
    
    return 0;
}