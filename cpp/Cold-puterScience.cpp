// Cold-puter Science

#include <iostream>
using namespace std;

int main(){
    int num, i, a, b;
    cin >> num;
    b = 0;
    for(i = 0; i < num; i++){
        cin >> a;
        if (a < 0)
            b++;
    }
    
    cout << b;
    return 0;
}