// Fast Food Prizes

// Numbers on a tree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <list> 
#include <string> 

using namespace std;

int main()
{
    int cases, numPrizes, stickerTypes, typesNeeded, stickerIndex, numStickers, cash, totalWinnings, prize;
    int i, j, k; // iterators
    int stickersOwned[31] = { 0 }; // list of stickers owned, (index(starting 1): type, value: number owned)
    int cashPrizes[11] = { 0 }; // (index(starting 1): cash prize, value: cash value)
    int stickerPrize[31] = { 0 }; // (index: stickerType,  value: Prize index (starting 1)
    int maxNums[11] = { 0 };
    int flag1 = 0; // flags

    cin >> cases;
    
    
    for (i = 0; i < cases; i++) {

        // Read in values
        cin >> numPrizes; // number of possible prizes (do not exceed)
        cin >> stickerTypes; // indexing does not go beyond here

        // clear 
        for (j = 1; j <= 10; j++) {
            stickerPrize[j] = 0;
            maxNums[j] = 100;
        }

        for (; j <= stickerTypes; j++) {
            stickerPrize[j] = 0;
        }

        for (j = 1; j <= numPrizes; j++) { // for each type of prize
            cin >> typesNeeded; 
            for (k = 1; k <= typesNeeded; k++) { // iterate and read values of stickers needed for that prize
                cin >> stickerIndex;
                stickerPrize[stickerIndex] = j;
            }
            cin >> cash;
            cashPrizes[j] = cash;
        }

        for (j = 1; j <= stickerTypes; j++) {
            cin >> numStickers;
            stickersOwned[j] = numStickers;
        }

        // process that batch
        totalWinnings = 0;

        // iterate through stickers requried list to find max nums
        for (k = 1; k <= stickerTypes; k++) {
            // find the prize it is used for
            prize = stickerPrize[k];
            // check the max num for that prize
            if (maxNums[prize] > stickersOwned[k]) {
                maxNums[prize] = stickersOwned[k];
            }
        }

        for (j = 1; j <= numPrizes; j++){
            totalWinnings += cashPrizes[j] * maxNums[j]; // call multiplier
        }

        cout << totalWinnings << endl;
    }
}
