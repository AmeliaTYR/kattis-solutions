// Autori

#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char str[100];
    char * ptr;
    cin >> str;
    ptr = strtok (str," ,.-");
    while (ptr != NULL){
        cout << *ptr;
        ptr = strtok (NULL, " ,.-");
    }

    return 0;
}