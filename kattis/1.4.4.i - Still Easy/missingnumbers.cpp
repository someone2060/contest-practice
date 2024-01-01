//#include <bits/stdc++.h>
#include <iostream>

int main()
{
  std::ios::sync_with_stdio(false);
  int n;
  std::cin >> n;
  bool right{ true };
  int next{ 1 };
  while (n--) {
    int i;
    std::cin >> i;
    if (i != next) {
      right = false;
      while (next != i) {
        std::cout << next << '\n';
        ++next;
      }
    }
    ++next;
  }
  if (right) std::cout << "good job\n";
  return 0;
}