// Esej
#include <iostream>
#include <math.h>
#include <cctype>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <queue>
#include <utility> 
#include <functional> 
#include <stdio.h> 
#include <stdlib.h> 

using namespace std;

int main()
{
    int maxW, minW, unique, currW, len, letter;
    int i, j, k, flag;
    string word;
    unordered_set <string> words;

    cin >> minW;
    cin >> maxW;

    unique = (maxW + 1 )/ 2;
    
    currW = 0;

    while (currW < unique) {
        len = (rand() % 5 + 1);
        word = "";
        for (i = 0; i < len; i++) {
            // generate characters
            letter = 97 + rand() % 26;
            word += char(letter);
        }
        if (words.find(word) == words.end()) {
            currW++;
            words.insert(word);
            cout << word << " ";
        }
    }

    while (currW < minW && currW < maxW) {
        cout << word << " ";
        currW++;
    }


    
    

}
