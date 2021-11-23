// Dice Cup
#include <iostream>
using namespace std;

int main (){
    int n, m, temp;
    cin >> n;
    cin >> m;
    
    if (n > m){
        temp = m;
        m = n;
        n = temp;
    }
    
    n++;
    
    for (n; n <= m+1; n++){
        cout << n << " " << endl;
    }
        
    return 0;
}