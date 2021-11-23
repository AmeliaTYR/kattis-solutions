// Greetings!

#include <iostream> 
#include <string> 
using namespace std; 
  
int main() 
{ 
    string input; 
    string reply = "h";
  
    getline(cin, input); 
    for (int i = 0; i < input.length() -2; i++){
        reply.push_back('e');
        reply.push_back('e');
    }
    reply.push_back('y');
    cout << reply;
  
    return 0; 
} 

