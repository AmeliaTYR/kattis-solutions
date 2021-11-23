// Spavanac

#include <iostream>
using namespace std;

int main(){
    int hrs, min, left;
    cin >> hrs;
    cin >> min;
    
    left = (min+60-45);
    if (left >= 60){
        cout << hrs << " " << left%60;
    } else {
        cout << (hrs+24-1)%24 << " " << left;
    }
    

    return 0;
}