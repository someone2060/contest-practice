#include <iostream>

using namespace std;

int main() {
    int P, C;
    cin >> P;
    cin >> C;

    int out;
    out = 50*P - 10*C;
    if (P > C) {
        out += 500;
    }
    cout << out;
    return 0;
}