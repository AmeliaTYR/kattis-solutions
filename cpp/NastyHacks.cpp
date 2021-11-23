// Nasty Hacks

#include <iostream>
using namespace std;

int main(){
    int n, r, e, c, net;
    cin >> n;
    
    for(;n>0; n--){
        cin >> r;
        cin >> e;
        cin >> c;
        
        net = r - (e-c);
        if (net > 0){
            cout << "do not advertise\n";
        } else if(net == 0){
            cout << "does not matter\n";
        } else {
            cout << "advertise\n";
        }
        
    }
    
    return 0;
}