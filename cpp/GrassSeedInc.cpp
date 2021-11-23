// Grass Seed Inc. 

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float c, n, sum, w, l;
    sum = 0;
    cin >> c;
    cin >> n;
    while (n--){
        cin >> w;
        cin >> l;
        sum += w*l;
    }
    cout << fixed;
    cout << setprecision(8) << sum*c;
    return 0;
}