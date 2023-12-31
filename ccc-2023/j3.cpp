#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> days (5, 0);
    string in;
    for (int i=0; i<N; i++) {
        cin >> in;
        for (int j=0; j<5; j++) {
            if (in.at(j) == 'Y') {
                days[j]++;
            }
        }
    }

    int max = 0;
    vector<int> bestDays;
    for (int i=0; i<5; i++) {
        if (days[i] < max) {
            continue;
        }
        if (days[i] > max) {
            max = days[i];
            bestDays = vector<int>(1, i);
            continue;
        }
        bestDays.push_back(i);
    }

    /*/debug
    cout << "days: ";
    for (int i : days) {
        cout << i << ' ';
    }
    cout << endl;
    //*/

    cout << (bestDays[0]+1);
    for (int i=1; i<int(bestDays.size()); i++) {
        cout << ',' << (bestDays[i]+1);
    }

    return 0;
}