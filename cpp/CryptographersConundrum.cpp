// Cryptographer's Conundrum

#include <iostream>
using namespace std;

int main(){
    string str;
    int i = 0;
    int count = 0;
    
    getline(cin,str);
    
    while(str[i] != '\0'){
        switch (i%3){
            case 0:
                if (str[i] != 'P'){
                    count++;
                }
                break;
            case 1:
                if (str[i] != 'E'){
                    count++;
                }
                break;
            case 2:
                if (str[i] != 'R'){
                    count++;
                }
                break;
        }
                
        i++;
        
    }
    
    cout << count;
    return 0;
}
