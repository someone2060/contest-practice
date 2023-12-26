//#include <bits/stdc++.h>
#include <iostream>

int main()
{
  std::ios::sync_with_stdio(false);
  // in
  int N;
  std::cin >> N;
  std::string word;
  std::cin >> word;
  // out
  while (N > 2) {
    std::cout << N << " bottles of " << word << " on the wall, " << N << " bottles of " << word << ". " <<
      "Take one down, pass it around, " << N-1 << " bottles of " << word << " on the wall.\n";
    --N;
  }
  switch (N) {
    case 2:
      std::cout << "2 bottles of " << word << " on the wall, 2 bottles of " << word << ". " <<
        "Take one down, pass it around, 1 bottle of " << word << " on the wall.\n";
    case 1:
      std::cout << "1 bottle of " << word << " on the wall, 1 bottle of " << word << ". " <<
        "Take it down, pass it around, no more bottles of " << word << ".\n";
  }
  return 0;
}