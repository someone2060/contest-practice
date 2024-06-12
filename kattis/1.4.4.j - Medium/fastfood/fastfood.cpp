//#include <bits/stdc++.h>
#include <iostream>
#include <vector>

int main()
{
  std::ios::sync_with_stdio(false);
  int cases;
  std::cin >> cases;
  while (cases--) {
    // in
    int N, M;
    std::cin >> N >> M;
    std::vector<std::vector<int>> prizes(N);
    std::vector<int> cash(N);
    for (int i{ 0 }; i<N; i++) {
      int K;
      std::cin >> K;
      std::vector<int> types(K);
      for (int j{ 0 }; j<K; j++) {
        std::cin >> types[j];
      }
      prizes[i] = types;
      std::cin >> cash[i];
    }
    std::vector<int> tickets(M);
    for (int i{ 0 }; i<M; i++) {
      std::cin >> tickets[i];
    }
    // calc
    int winnings{ 0 };
    for (int i{ 0 }; i<N; i++) {
      int min{ INT_MAX };
      for (int j : prizes[i]) {
        if (tickets[j-1] < min) min = tickets[j-1];
      }
      winnings += cash[i]*min;
    }
    // out
    std::cout << winnings << '\n';
  }
  return 0;
}