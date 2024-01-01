//#include <bits/stdc++.h>
#include <iostream>

int main()
{
  std::ios::sync_with_stdio(false);
  int n;
  std::cin >> n;
  std::cout << ((n > 3) ? n-2 : 1) << '\n';
  return 0;
}