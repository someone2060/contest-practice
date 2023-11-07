#include <iostream>
#include <vector>

using namespace std;
int n, q;
const int N_MAX = 2e5+5; // good habit to add a few more
int sparseTable[N_MAX][20];

void prepare() {
    for(int k=1; k<20; k++) {
        for (int i=1; i<=n; i++) {
            sparseTable[i][k] = sparseTable[sparseTable[i][k-1]][k-1];
        }
    }
}

int jump(int x, int k) {
    // jump k levels using sparse table
    // loop digits from 0 to 19
    for(int i=0; i<20; i++) {
        // check k's i's digit
        // if is 1, then jump
        if((k>>i) & 1) {
            x = sparseTable[x][i];
        }
    }
    return x>0 ? x : -1;
}

int main() {
    cin >> n >> q;
    for(int i=2; i<=n; i++) {
        cin >> sparseTable[i][0]; // direct boss
    }
    // fill sparse table
    prepare();
    while(q--) {
        int x, k;
        cin >> x >> k;
        cout << jump(x, k) << endl;
    }
    return 0;
}