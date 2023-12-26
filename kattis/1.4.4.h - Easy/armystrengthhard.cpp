//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

int main()
{
  std::ios::sync_with_stdio(false);
  int T;
  std::cin >> T;
  while (T--) {
    // in
    int G, M;
    std::cin >> G >> M;
    std::vector<int> ng(G);
    for (int i{ 0 }; i<G; ++i) {
      std::cin >> ng[i];
    }
    std::vector<int> nm(M);
    for (int i{ 0 }; i<M; ++i) {
      std::cin >> nm[i];
    }
    // calc
    sort(ng.begin(), ng.end());
    sort(nm.begin(), nm.end());
    while (ng.size() * nm.size()) {
      if (nm[0] > ng[0]) {
        ng.erase(ng.begin());
        continue;
      }
      nm.erase(nm.begin());
    }
    // out
    if (!nm.size()) std::cout << "Godzilla\n";
    else std::cout << "MechaGodzilla\n";
  }
  return 0;
}