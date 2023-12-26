//#include <bits/stdc++.h>
#include <iostream>
#include <array>

std::array<int, 2> slatsUseable(std::string in) {
  std::array<int, 2> out;
  out[0] = 2 - ((in[0] - 48) + (in[1] - 48));
  out[1] = 2 - ((in[2] - 48) + (in[3] - 48));
  return out;
}

int main()
{
  std::ios::sync_with_stdio(false);
  // in
  int N;
  std::cin >> N;
  // calc, in
  int slatsTB = 0;
  int slatsLR = 0;
  while (N--) {
    std::string in;
    std::cin >> in;
    std::array<int, 2> slats = slatsUseable(in);
    slatsTB += slats[0];
    slatsLR += slats[1];
  }
  int swords = (slatsTB < slatsLR) ? slatsTB / 2 : slatsLR / 2;
  std::cout << swords << ' ' 
    << (slatsTB - swords*2) << ' ' 
    << (slatsLR - swords*2) << '\n';
  return 0;
}