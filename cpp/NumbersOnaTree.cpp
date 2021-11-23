// Numbers On a Tree

#include <iostream>
#include <math.h>
#include <list> 
#include <string> 

using namespace std;

int main()
{
    int H;
    cin >> H;

    int totalNodes = pow(2, H+1) - 1;
    list <char> chList;
    string str;
    int i = 0;
    int start = 0;

    cin >> str;

    while (str[i] != '\0') {
        if (str[i] == 'L') {
            start = start * 2 + 1;
        }
        else {
            start = start * 2 + 2;
        }
        i++;
    }
    
    int node = totalNodes - start;

    cout << node;
}
 rss f