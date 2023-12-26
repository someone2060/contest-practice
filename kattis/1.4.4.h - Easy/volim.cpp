//#include <bits/stdc++.h>
#include <iostream>

int main()
{
  std::ios::sync_with_stdio(false);
  int K;
  std::cin >> K;
  int N;
  std::cin >> N;
  int time = 210;
  while (time > 0) {
    int T;
    char Z;
    std::cin >> T;
    std::cin >> Z;
    if (T > time) break;
    time -= T;
    if (Z == 'T') K = (K != 8) ? K+1 : 1;
  }
  std::cout << K;
  return 0;
}