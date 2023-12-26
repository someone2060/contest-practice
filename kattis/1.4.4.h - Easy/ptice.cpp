//#include <bits/stdc++.h>
#include <iostream>

bool questionRight(char q, std::string seq, int index) {
  return (q == seq[index % seq.length()]);
}

int main()
{
  std::ios::sync_with_stdio(false);
  int N;
  std::cin >> N;
  int a{ 0 }, b{ 0 }, c{ 0 };
  std::string aSeq = "ABC", bSeq = "BABC", cSeq = "CCAABB";
  for (int i=0; i<N; i++) {
    char letter;
    std::cin >> letter;
    a += questionRight(letter, aSeq, i);
    b += questionRight(letter, bSeq, i);
    c += questionRight(letter, cSeq, i);
  }
  int max;
  max = (b > c) ? b : c;
  max = (max > a) ? max : a;
  std::cout << max << '\n';
  if (max == a) std::cout << "Adrian\n";
  if (max == b) std::cout << "Bruno\n";
  if (max == c) std::cout << "Goran\n";
  return 0;
}