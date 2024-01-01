//#include <bits/stdc++.h>
#include <iostream>
#include <string>

int main()
{
  std::ios::sync_with_stdio(false);
  int n;
  std::cin >> n;
  bool found{ false };
  while (n--) {
    bool pea{ false }, pan{ false };
    int k;
    std::cin >> k;
    std::cin.ignore();
    std::string r; // restaurant name
    std::getline (std::cin, r);
    while (k--) {
      std::string menu;
      std::getline (std::cin, menu);
      // check menu
      if (menu.compare("pea soup") == 0) pea = true;
      else if (menu.compare("pancakes") == 0) pan = true;
      // if all available
      if (pea && pan) {
        found = true;
        std::cout << r << '\n';
        break;
      }
    }
    if (found) break;
  }
  if (!found) std::cout << "Anywhere is fine I guess\n";
  return 0;
}