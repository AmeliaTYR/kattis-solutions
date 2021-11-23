// Detailed Differences

#include <iostream>
#include <string>
using namespace std;

int main (){
    int n, i, s;
    string a, b;
    
    cin >> n;
    while(n--){
        cin >> a;
        cin >> b;
        cout << a << endl;
        cout << b << endl;
        s = a.length();
        
        for(i=0; i<s; i++){
            if(a[i] == b[i])
                cout << '.';
            else
                cout << '*';
        }
        
        cout << endl;
        cout << endl;
    }
    
    return 0;
}
