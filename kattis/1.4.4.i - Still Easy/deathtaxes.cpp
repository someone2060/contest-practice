//#include <bits/stdc++.h>
#include <iomanip>
#include <iostream>

int main()
{
  std::ios::sync_with_stdio(false);
  int shares{ 0 };
  long double price{ 0.0L };
  while (true) {
    std::string event;
    std::cin >> event;
    if (event.compare("buy") == 0) {
      int x;
      long double y;
      std::cin >> x >> y;
      price = (x*y + shares*price) / (x+shares);
      shares += x;
    } else if (event.compare("sell") == 0) {
      int x;
      long double y;
      std::cin >> x >> y;
      shares -= x;
    } else if (event.compare("split") == 0) {
      int x;
      std::cin >> x;
      price /= x;
      shares *= x;
    } else if (event.compare("merge") == 0) {
      int x;
      std::cin >> x;
      price *= x;
      shares /= x;
    } else if (event.compare("die") == 0) {
      long double y;
      std::cin >> y;
      std::cout << std::setprecision(16);
      if (y > price) std::cout << (shares * (y - (y-price)*.3)) << '\n';
      else std::cout << (shares * y) << '\n';
      break;
    }
  }
  return 0;
}
/*
buy 1 10
die 9876543.21

*/