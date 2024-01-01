//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
  std::ios::sync_with_stdio(false);
  while (true) {
    // in
    int k;
    std::cin >> k;
    if (!k) break;
    int m;
    std::cin >> m;
    std::vector<std::string> courses(k);
    for (int i{ 0 }; i<k; i++) {
      std::cin >> courses[i];
    }
    std::sort(courses.begin(), courses.end());
    // calc
    bool meets{ true };
    while (m--) {
      int c, r;
      std::cin >> c >> r;
      while (c--) {
        std::string test;
        std::cin >> test;
        if (!meets) continue;
        if (std::binary_search(courses.begin(), courses.end(), test)) --r;
      }
      if (r > 0) meets = false;
    }
    // out
    if (meets) std::cout << "yes\n";
    else std::cout << "no\n";
  }
  return 0;
}