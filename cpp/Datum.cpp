// Datum

#include <iostream>
using namespace std;

int main(){
    int d, m, t;
    cin >> d;
    cin >> m;
    
    switch (m){
        case 1: 
            t = 0;
            break;
        case 2:
            t = 31;
            break;
        case 3:
            t = 59;
            break;
        case 4: 
            t = 90;
            break;
        case 5:
            t = 120;
            break;
        case 6:
            t = 151;
            break;
        case 7: 
            t = 181;
            break;
        case 8:
            t = 212;
            break;
        case 9:
            t = 243;
            break;
        case 10: 
            t = 273;
            break;
        case 11:
            t = 304;
            break;
        case 12:
            t = 334;
            break;    
    }
    
    t += d;
    t %= 7;
    
    switch(t){
        case 1:
            cout << "Thursday";
            break;
        case 2:
            cout << "Friday";
            break;
        case 3:
            cout << "Saturday";
            break;
        case 4:
            cout << "Sunday";
            break;
        case 5:
            cout << "Monday";
            break;
        case 6:
            cout << "Tuesday";
            break;
        case 0:
            cout << "Wednesday";
            break;
    }
    
    return 0;
}
