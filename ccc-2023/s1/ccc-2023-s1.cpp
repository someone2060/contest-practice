#include <iostream>
#include <vector>

using namespace std;

int main() {
    int input;
    // in C
    int C;
    cin >> C;

    // in rowTop
    vector<bool> rowTop (C);
    for (int i=0; i<C; i++) {
        cin >> input;
        if (input == 1) {
            rowTop[i] = true;
        } else {
            rowTop[i] = false;
        }
    }

    // in rowBottom
    vector<bool> rowBottom (C);
    for (int i=0; i<C; i++) {
        cin >> input;
        if (input == 1) {
            rowBottom[i] = true;
        } else {
            rowBottom[i] = false;
        }
    }

    bool isUp, isLeft;
    int tapeNeeded = 0;

    // Loop through top row
    for (int i=0; i<rowTop.size(); i++) {
        if (i != 0) {
            isLeft = rowTop[i-1];
        }

        if (rowTop[i]) {
            if (isLeft) {
                tapeNeeded++;
            } else {
                tapeNeeded += 3;
            }
        }
        /*/debug
        cout << "filled? " << rowTop[i];
        cout << " isLeft: " << isLeft;
        cout << " tapeNeeded: " << tapeNeeded;
        cout << endl;
        //*/
    }
    
    // Loop through bottom row
    for (int i=0; i<rowBottom.size(); i++) {
        if (i != 0) {
            isLeft = rowBottom[i-1];
        }
        isUp = false;
        if (i%2 == 0) {
            isUp = rowTop[i];
        }

        if (rowBottom[i]) {
            if (isUp && isLeft) {
                tapeNeeded--;
            } else if (isLeft || isUp) {
                tapeNeeded++;
            } else {
                tapeNeeded += 3;
            }
        }
        /*/debug
        cout << "filled? " << rowTop[i];
        cout << " isLeft: " << isLeft;
        cout << " isUp: " << isUp;
        cout << " tapeNeeded: " << tapeNeeded;
        cout << endl;
        //*/
    }

    cout << tapeNeeded;

    return 1;
}