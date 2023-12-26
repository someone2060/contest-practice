//#include <bits/stdc++.h>
#include <iostream>

int main()
{
  std::ios::sync_with_stdio(false);
  std::string s;
  std::cin >> s;
  int b = 0, w = 0;
  for (char c : s) {
    if (c == 'B') ++b;
    else ++w;
  }
  if (b == w) std::cout << 1 << '\n';
  else std::cout << 0 << '\n';
  return 0;
}