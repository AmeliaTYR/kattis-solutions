// Pot

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int N, num, base, power, sum;
    sum = 0;
    cin >> N;
    for(; N > 0; N--){
        cin >> num;
        base = num /10;
        power = num %10;
        sum += pow(base, power);
    }
    cout << sum;
    return 0;
}