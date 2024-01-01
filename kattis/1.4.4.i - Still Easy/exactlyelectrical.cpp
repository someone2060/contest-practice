//#include <bits/stdc++.h>
#include <iostream>

int main()
{
  std::ios::sync_with_stdio(false);
  int a, b;
  std::cin >> a >> b;
  int c, d;
  std::cin >> c >> d;
  int t;
  std::cin >> t;
  int dist = abs(a-c) + abs(b-d);
  std::cout << ((dist + t)%2 == 0 && dist <= t ? "Y\n" : "N\n");
  return 0;
}
/*
3 4
3 4
0

*/