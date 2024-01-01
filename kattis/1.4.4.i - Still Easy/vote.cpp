//#include <bits/stdc++.h>
#include <iostream>
#include <vector>

int main()
{
  std::ios::sync_with_stdio(false);
  int T;
  std::cin >> T;
  while (T--) {
    // in
    int n;
    std::cin >> n;
    int max{ 0 }, index{ -1 };
    bool winner{ true };
    int total{ 0 };
    // calc
    for (int i{ 0 }; i<n; i++) {
      int crnt;
      std::cin >> crnt;
      if (crnt > max) {
        max = crnt;
        index = i+1;
        winner = true;
      } else if (crnt == max) {
        winner = false;
      }
      total += crnt;
    }
    // out
    if (!winner) {
      std::cout << "no winner\n";
      continue;
    }
    if (max > total/2) {
      std::cout << "majority winner " << index << '\n';
      continue;
    }
    std::cout << "minority winner " << index << '\n';
  }
  return 0;
}