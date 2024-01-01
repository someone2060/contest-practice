//#include <bits/stdc++.h>
#include <iostream>
#include <array>

struct TableData
{
  int speed;
  double efficiency;
};

int main()
{
  std::ios::sync_with_stdio(false);
  // in
  double C, X, M;
  std::cin >> C >> X >> M;
  std::array<TableData, 6> manual {};
  for (int i{ 0 }; i<6; i++) {
    std::cin >> manual[i].speed >> manual[i].efficiency;
  }
  // calc (t=d/v, g=m/MPG)
  double gallons{ C/2 };
  bool canReach{ false };
  for (int i{ 5 }; i>=0; i--) {
    double time{ M/manual[i].speed };
    double cost{ time*X + M/manual[i].efficiency };
    if (cost < gallons) {
      std::cout << "YES " << manual[i].speed << '\n';\
      canReach = true;
      break;
    }
  }
  if (!canReach) std::cout << "NO\n";
  // out
  return 0;
}