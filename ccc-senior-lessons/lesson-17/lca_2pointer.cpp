#include <iostream>
#include <vector>

using namespace std;
const int N_MAX = 20;
int n, q;
vector<int> adj[N_MAX];
int depth[N_MAX], parent[N_MAX]; // 0 is parent of root

// recursive
void dfs(int current, int pa) {
    parent[current] = pa;
    depth[current] = depth[pa]+1; // depth always one higher
    for (int i : adj[current]) {
        if (i != pa) {
            dfs(i, current); // i is parent of current
        }
    }
}

int lca(int node1, int node2) {
    if(node1 == node2) {
        return node1;
    }
    // check depth of both nodes
    if(depth[node1] < depth[node2]) {
        // always make node1 deeper than node2
        swap(node1, node2);
    }
    // level node1 has to reach
    int diff = depth[node1] - depth[node2];
    while(diff--) {
        node1 = parent[node1];
    }
    while(node1 != node2) {
        node1 = parent[node1];
        node2 = parent[node2];
    }
    return node1;
}

int main() {
    cin >> n >> q;
    for (int i=0; i<n-1; i++) { // loop n-1 edges
        int a, b;
        cin >> a >> b; // node is parent -> child
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    // find depth for all nodes
    depth[0] = 0;
    dfs(1, 0); // root, parent
    while(q--) {
        int a, b;
        cin >> a >> b;
        cout << lca(a, b) << endl;
    }
}