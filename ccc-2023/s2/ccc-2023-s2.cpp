#include <iostream>
#include <vector>
#include <cstdlib>
#include <climits>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> heights (N);
    for (int i=0; i<N; i++) {
        cin >> heights[i];
    }

    int smallest;
    int testValue;
    int len = 1;
    bool isOdd = true;
    int offset, centre;

    int heightsSize = heights.size();
    cout << "0 "; //len 1
    // Loop for every crop when len >= 2
    for (int i=1; i<heightsSize; i++) {
        len++;
        isOdd = (isOdd) ? false : true;
        smallest = INT_MAX;
        centre = len/2 - 1;

        // Loop through every possibilty
        for (int j=0; j<(heightsSize-i); j++) {
            testValue = 0;
            /*/debug
            cout << "\nNEW len: " << len;
            //*/
            offset = 0;
            centre++;
            while (offset < len/2) {
                /*/debug
                cout << "\nindex 1: " << centre-offset-1 << " index 2: " << centre+offset+isOdd << endl;
                //*/
                testValue += abs(heights[centre-offset-1] - heights[centre+offset+isOdd]);
                if (testValue > smallest) {
                    break;
                }
                offset++;
            }//end asym
            /*/debug
            cout << "testValue: " << testValue << endl;
            cout << "smallest: " << smallest << endl;
            cout << "offset: " << offset << endl;
            //*/

            if (offset == len/2) {
                smallest = testValue;
                if (smallest == 0) {
                    break;
                }
            }//end if

        }//end j
        /*/debug
        cout << "OUT: ";
        //*/
        // output smallest
        cout << smallest << " ";
    }//end i
    return 0;
}