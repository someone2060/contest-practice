#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    int out = 0;
    string in;
    char inChar;
    for (int i=0; i<N; i++) {
        cin >> in;
        inChar = in.at(0);
        switch (inChar)
        {
        case 'P':
            out += 1500;
            break;
        case 'M':
            out += 6000;
            break;
        case 'S':
            out += 15500;
            break;
        case 'C':
            out += 40000;
            break;
        case 'T':
            out += 75000;
            break;
        case 'H':
            out += 125000;
            break;
        }
    }
    cout << out;
    return 0;
}