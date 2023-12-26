//#include <bits/stdc++.h>
#include <iostream>

int main()
{
  std::ios::sync_with_stdio(false);
  // in
  char in;
  int T{ 0 }, C{ 0 }, G{ 0 };
  while (std::cin >> in) {
    switch (in) {
      case 'T':
        ++T;
        break;
      case 'C':
        ++C;
        break;
      case 'G':
        ++G;
        break;
    }
  }
  // calc
  int min{ (T < C) ? T : C };
  min = (min < G) ? min : G;
  // out
  std::cout << T*T + C*C + G*G + min*7;
  return 0;
}