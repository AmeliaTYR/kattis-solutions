// Hissing Microphone

#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char str[30];
    cin >> str;
    
    if(strstr(str,"ss"))
        cout << "hiss";
    else
        cout << "no hiss";
        
    return 0;
}
