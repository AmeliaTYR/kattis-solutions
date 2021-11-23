// Tarifa

#include <iostream>
using namespace std;

int main(){
    int x, n, i, left;
    cin >> x;
    cin >> n;
    left = x*(n+1);
    for (i = 0; i < n; i++){
        cin >> x;
        left -= x;
    }
    cout << left;

    return 0;
}