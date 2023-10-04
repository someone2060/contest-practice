#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int asymmetricValue(vector<int> heights) {
    if (heights.size() <= 1) {
        return 0;
    }

    int out = 0;
    for (int i=0; i<(heights.size()/2); i++) {
        out += abs(heights[i] - heights[heights.size()-1-i]);
    }
    return out;
}

vector<int> slice(vector<int> v, int start, int end) {
    vector<int> out (end-start);
    for (int i=start; i<end; i++) {
        out[i-start] = v[i];
    }
    return out;
}

int main() {
    // input
    int input;

    int N;
    cin >> N;

    vector<int> heights (N);
    for (int i=0; i<N; i++) {
        cin >> input;
        heights[i] = input;
    }

    /*/debug
    vector<int> debug = slice(heights, 2, 5);
    for (int i : debug) {
        cout << i << " ";
    }
    cout << endl;
    //*/

    // calc
    // if length of 1, will always return false
    cout << "0 ";

    int smallest, testValue;
    for (int i=1; i<heights.size(); i++) {
        smallest = asymmetricValue(slice(heights, 0, i+1));
        // Loop through every possibilty
        for (int j=1; j<(heights.size()-i); j++) {
            if (smallest == 0) {
                break;
            }
            testValue = asymmetricValue(slice(heights, j, j+i+1));
            if (testValue < smallest) {
                smallest = testValue;
            }
        }
        // output smallest
        cout << smallest << " ";
    }
    return 0;
}