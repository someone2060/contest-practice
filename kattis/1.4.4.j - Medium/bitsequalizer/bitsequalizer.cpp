//#include <bits/stdc++.h>
#include <iostream>

int main()
{
  std::ios::sync_with_stdio(false);
  // in
  int C;
  std::cin >> C;
  for (int i{ 0 }; i<C; i++) {
    std::string S, T;
    std::cin >> S >> T;
    int unknown{ 0 };
    int swapZero{ 0 };
    int swapOne{ 0 };
    int zeroS{ 0 };
    for (int j{ 0 }; j < S.length(); j++) {
      switch (S[j]) {
        case '?':
          unknown++;
          break;
        case '0':
          zeroS++;
          if (T[j] == '1') swapZero++;
          break;
        case '1':
          if (T[j] == '0') swapOne++;
      }
    }
    int zeroT{ 0 };
    for (char crnt : T) {
      if (crnt == '0') zeroT++;
    }
    int pairs{ (swapZero < swapOne) ? swapZero : swapOne };
    swapZero -= pairs;
    swapOne -= pairs;
    // out
    std::cout << "Case " << i+1 << ": ";
    if (zeroT <= zeroS+unknown &&
        zeroT >= zeroS-unknown) {
      std::cout << (unknown + swapOne + swapZero + pairs) << '\n';
    } else {
      std::cout << -1 << '\n';
    }
  }
  return 0;
}