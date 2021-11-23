// Heart Rate

#include <iostream> 
#include <iomanip>
using namespace std;

int main(){
    int n;
    double b, p, t, min, bpm, max;
    cin >>  n;
    
    for (; n > 0; n--){
        cin >> b;
        cin >> p;
        t = 60/p;
        bpm = t*b;
        min = bpm-t;
        max = bpm+t;
        cout << fixed;
        cout << setprecision(4) << min << " " << bpm << " " << max << endl;
    }
    
    return 0;
}
