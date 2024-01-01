//#include <bits/stdc++.h>
#include <iostream>

int main()
{
  std::ios::sync_with_stdio(false);
  int n, r, k;
  std::cin >> n >> r >> k;
  if ((n+r)%2 == 1) ++n;
  int largest{ (r > k) ? r : k };
  if (n > largest) std::cout << n+r << '\n';
  else std::cout << largest*2 << '\n';
  return 0;
}