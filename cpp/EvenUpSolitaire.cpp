// Even Up Solitaire

#include <iostream>
#include <math.h>
#include <cctype>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <string>
#include <stack>

using namespace std;

int main()
{
    int numCards, cardsLeft, temp, topCd;
    int i, j, k, flag;
    stack <int> cards;

    cin >> numCards;
    cardsLeft = numCards;

    for (i = 0; i < numCards; i++) {
        cin >> temp;
        if (cards.empty()) {
            cards.push(temp);
        }
        else {
            topCd = cards.top();
            if (topCd %2 == temp %2){
                cards.pop();
                cardsLeft -= 2;
            }
            else {
                cards.push(temp);
            }
        }
        
    }

    cout << cardsLeft;

}