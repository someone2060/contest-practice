//#include <bits/stdc++.h>
#include <iostream>

int main()
{
  std::ios::sync_with_stdio(false);
  while (true) {
    int w, l;
    std::cin >> w >> l;
    if (!w && !l) break;
    int n;
    std::cin >> n;
    int robotW{ 0 }, robotL{ 0 };
    int actualW{ 0 }, actualL{ 0 };
    while (n--) {
      char x;
      int y;
      std::cin >> x >> y;
      switch (x) {
        case 'u':
          robotL += y;
          actualL = (actualL+y < l) ? actualL+y : l-1;
          break;
        case 'd':
          robotL -= y;
          actualL = (actualL-y >= 0) ? actualL-y : 0;
          break;
        case 'l':
          robotW -= y;
          actualW = (actualW-y >= 0) ? actualW-y : 0;
          break;
        case 'r':
          robotW += y;
          actualW = (actualW+y < w) ? actualW+y : w-1;
          break;
      }
    }
    std::cout << "Robot thinks " << robotW << ' ' << robotL << '\n';
    std::cout << "Actually at " << actualW << ' ' << actualL << "\n\n";
  }
  return 0;
}