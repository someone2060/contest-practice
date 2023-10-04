#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int asymmetricValue(vector<int> heights) {
    if (int(heights.size()) <= 1) {
        return 0;
    }

    long int out = 0;
    for (int i=0; i<(int(heights.size())/2); i++) {
        out += abs(heights[i] - heights[int(heights.size())-1-i]);
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

    int smallest, testValue;
    int heightsSize;
    vector<int> firstCrop (1, heights[0]);
    vector<int> crop;

    heightsSize = heights.size();
    // Loop for every mountain size
    for (int i=0; i<heightsSize; i++) {
        crop = firstCrop;
        smallest = asymmetricValue(crop);

        // Loop through every possibilty
        for (int j=1; j<(heightsSize-i); j++) {
            if (smallest == 0) {
                break;
            }
            crop.push_back(heights[i+j]);
            crop.erase(crop.begin());

            testValue = asymmetricValue(crop);

            if (testValue < smallest) {
                smallest = testValue;
            }
        }
        // output smallest
        cout << smallest << " ";
        // incr firstCrop
        firstCrop.push_back(heights[i+1]);
    }
    return 0;
}