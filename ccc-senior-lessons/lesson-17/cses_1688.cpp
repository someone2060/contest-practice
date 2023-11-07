#include <iostream>
#include <vector>

using namespace std;
int n, q;
const int N_MAX = 2e5+5; // good habit to add a few more
int sparseTable[N_MAX][20];
int depth[N_MAX];
vector<int> children[N_MAX]; // similar to adj list

void prepare() {
    for(int k=1; k<20; k++) {
        for (int i=1; i<=n; i++) {
            sparseTable[i][k] = sparseTable[sparseTable[i][k-1]][k-1];
        }
    }
}

void dfs(int u) {
    for (int v : children[u]) {
        depth[v] = depth[u] + 1;
        dfs(v);
    }
}

int jump(int a, int k) {
    // jump k levels using sparse table
    // loop digits from 0 to 19
    for(int i=0; i<20; i++) {
        // check k's i's digit
        // if is 1, then jump
        if((k>>i) & 1) {
            a = sparseTable[a][i];
        }
    }
    return a;
}

int lca(int a, int b) {
    if (depth[a] < depth[b]) swap(a, b);
    int diff = depth[a] - depth[b];

    a = jump(a, diff);
    if (a == b) return a;
    // try to jump 1, 2, 4, ... 2^19
    for (int i=19; i>=0; i--) { // try jumping largest
        int aj = jump(a, i);
        int bj = jump(b, i);
        if (aj != bj) {
            a = aj;
            b = bj;
        }
    }
    return sparseTable[a][0]; // get the direct boss of a
}

int main() {
    ios::sync_with_stdio(0);
    cin >> n >> q;
    for(int i=2; i<=n; i++) {
        int b;
        cin >> b;
        // i's boss is b
        sparseTable[i][0] = b;
        children[b].push_back(i);
    }
    prepare(); // fill sparse table
    dfs(1); // calculate depths starting from super boss
    while (q--) {
        int a, b;
        cin >> a >> b;
        cout << lca(a, b) << endl;
    }
}