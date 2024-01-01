//#include <bits/stdc++.h>
#include <iostream>
#include <vector>

int main()
{
  std::ios::sync_with_stdio(false);
  // in
  int N;
  std::cin >> N;
  std::vector<int> tea(N);
  for (int i{ 0 }; i<N; i++) {
    std::cin >> tea[i];
  }
  int M;
  std::cin >> M;
  std::vector<int> top(M);
  for (int i{ 0 }; i<M; i++) {
    std::cin >> top[i];
  }
  // calc
  int min = INT_MAX;
  for (int i{ 0 }; i<N; i++) {
    int j;
    std::cin >> j;
    while (j--) {
      int v;
      std::cin >> v;
      if (tea[i] + top[v-1] < 
          min) {
        min = tea[i] + top[v-1];
      }
    }
  }
  // out
  int X;
  std::cin >> X;
  if (X < min) std::cout << 0;
  else std::cout << (X/min-1);
  return 0;
}