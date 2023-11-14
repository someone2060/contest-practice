#include <iostream>
#include <vector>

using namespace std;

int main() {
    string W;
    cin >> W;

    int R;
    cin >> R;
    
    int C;
    cin >> C;

    vector<vector<char>> grid (R, vector<char> (C));
    for (int i=0; i<R; i++) {
        for (int j=0; j<C; j++) {
            cin >> grid[i][j];
        }
    }

    //word search
    char firstChar;
    char crntChar;
    int pos;
    for (int i=0; i<R; i++) {
        for (int j=0; j<C; j++) {
            firstChar = grid[i][j];
            crntChar = firstChar;
            pos = 0;
        }
    }
    return 0;
}