// Backspace

#include <iostream>
#include <list> 
#include <string> 

using namespace std;

int main() {
    list <char> chList;
    string str;
    int i = 0;
    
    cin >> str;
    
    while (str[i]!='\0'){
        if(str[i] == '<'){
            chList.pop_front();
        } else {
            chList.push_front(str[i]);
        }
        i++;
    }
    
    while(!chList.empty()){
        cout << chList.back();
        chList.pop_back();
    }
    
    
    return 0;
}