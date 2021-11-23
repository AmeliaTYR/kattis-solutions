// Piece of Cake

#include <iostream>
using namespace std;

int main (){
    int n, h, v, size;
    cin >> n;
    cin >> h;
    cin >> v;
    
    size = 4*(h>n/2 ? h : n-h)*(v > n/2 ? v : n-v);
    cout << size;
    
    return 0;
}