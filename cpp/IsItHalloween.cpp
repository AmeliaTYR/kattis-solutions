// IsItHalloween.com

#include <iostream>
using namespace std;

int main(){
    string mth;
    int day;
    
    cin >> mth;
    cin >> day;
    
    if ((mth == "OCT" & day == 31) | (mth == "DEC" & day == 25))
        cout << "yup";
    else 
        cout << "nope";
    return 0;
}