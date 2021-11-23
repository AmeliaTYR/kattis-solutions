// Quality-Adjusted Life-Year

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int prds;
    double quality, years, sum;
    
    sum = 0;
    
    cin >> prds;
    
    for (; prds > 0; prds--){
        cin >> quality;
        cin >> years;
        sum += quality * years;
    }
    
    cout << fixed;
    cout << setprecision(3) << sum;
   
    
    return 0;
}