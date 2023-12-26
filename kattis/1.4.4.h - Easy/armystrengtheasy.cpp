//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  int T;
  cin >> T;
  while (T--) {
    // in
    int G, M;
    cin >> G >> M;
    vector<int> ng(G);
    for (int i=0; i<G; i++) {
      cin >> ng[i];
    }
    vector<int> nm(M);
    for (int i=0; i<M; i++) {
      cin >> nm[i];
    }
    // calc
    sort(ng.begin(), ng.end());
    sort(nm.begin(), nm.end());
    while (ng.size() * nm.size() != 0) {
      if (nm[0] > ng[0]) {
        ng.erase(ng.begin());
        continue;
      }
      nm.erase(nm.begin());
    }
    // out
    if (nm.size() == 0) cout << "Godzilla\n";
    else cout << "MechaGodzilla\n";
  }
  return 0;
}