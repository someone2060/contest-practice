//#include <bits/stdc++.h>
#include <iostream>

int main()
{
  std::ios::sync_with_stdio(false);
  int M, P, L, E, R, S, N;
  while (std::cin >> M >> P >> L >> E >> R >> S >> N) {
    while (N--) {
      int tempL = M*E;
      M = P / S;
      P = L / R;
      L = tempL;
    }
    std::cout << M << '\n';
  }
  return 0;
}