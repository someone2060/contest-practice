//#include <bits/stdc++.h>
#include <iostream>
#include <vector>

char counter(char in) {
  switch (in) {
    case 'R':
      return 'S';
    case 'B':
      return 'K';
    case 'L':
      return 'H';
    default:
      return ' ';
  }
}

int main()
{
  std::ios::sync_with_stdio(false);
  // in
  std::string in;
  std::cin >> in;
  if (in.length() < 3) { //edge case
    for (char i : in) {
      std::cout << counter(i);
    }
    return 0;
  }
  // calc, out
  std::string crnt{ "" };
  for (int i{0}; i<3; i++) { //first crnt
    crnt.push_back(in[i]);
  }
  std::vector<std::string> comboChances;
  comboChances.push_back("RBL");
  comboChances.push_back("RLB");
  comboChances.push_back("BRL");
  comboChances.push_back("BLR");
  comboChances.push_back("LRB");
  comboChances.push_back("LBR");
  for (int i{2}; i<in.length(); i++) {
    //std::cout << "\nindex: " << i << "\ncrnt: " << crnt << '\n'; //DEBUG
    bool combo{ false };
    for(std::string check : comboChances) { // look to print C
      if (crnt.compare(check) == 0) {
        combo = true;
        std::cout << 'C';
        crnt = "";
        for (int j{i+1}; j<i+4; j++) { //first crnt
          crnt.push_back(in[j]);
        }
        i += 2;
        break;
      }
    }
    if (combo) continue;
    std::cout << counter(crnt[0]);
    // replace with next
    crnt.erase(crnt.begin());
    crnt.push_back(in[i+1]);
  }
  for (char i : crnt) {
    std::cout << counter(i);
  }
  std::cout << '\n';
  return 0;
}