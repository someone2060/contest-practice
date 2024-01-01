//#include <bits/stdc++.h>
#include <iostream>

int main()
{
  std::ios::sync_with_stdio(false);
  int N, B, H, W;
  std::cin >> N >> B >> H >> W;
  int pMin{ INT_MAX };
  while (H--) {
    int p;
    std::cin >> p;
    if (p*N > B) {
      for (int i{ 0 }; i<W; ++i) {
        std::cin >> p;
      }
      continue;
    }
    for (int i{ 0 }; i<W; ++i) {
      int a;
      std::cin >> a;
      if (N > a) continue;
      if (pMin > p) pMin = p;
    }
  }
  // out
  if (pMin == INT_MAX) std::cout << "stay home\n";
  else std::cout << pMin*N << '\n';
  return 0;
}