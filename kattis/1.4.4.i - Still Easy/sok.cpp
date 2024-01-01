//#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>

double ratio(int juice, int recipe) {
  return 1.0*juice / recipe;
}

int main()
{
  std::ios::sync_with_stdio(false);
  int a, b, c;
  std::cin >> a >> b >> c;
  int i, j, k;
  std::cin >> i >> j >> k;
  double minRatio{ ratio(a, i) };
  if (ratio(b, j) < minRatio) minRatio = ratio(b, j);
  if (ratio(c, k) < minRatio) minRatio = ratio(c, k);
  std::cout << std::setprecision(6);
  std::cout << a - i*minRatio << ' ' << b - j*minRatio << ' ' << c - k*minRatio << '\n';
  return 0;
}