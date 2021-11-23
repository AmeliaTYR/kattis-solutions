// FizzBuzz
#include <iostream>
using namespace std;

int main(){
    int x, y, n, i;
    cin >> x;
    cin >> y;
    cin >> n;
    
    for(i = 1; i<=n; i++){
        if (i%x == 0){
            cout << "Fizz";
        } 
        if (i%y == 0){
            cout << "Buzz";
        } 
        if (i%x && i%y) {
            cout << i;
        }
        
        cout << endl;
    }
    
    return 0;
}