//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  struct {
    vector<char> ranks;
    vector<int> strengths;
  } cards;
  cards.ranks.push_back('Z'); //placeholder
  cards.strengths.push_back(0); //placeholder
  for (int i=0; i<5; i++) {
    string in;
    cin >> in;
    // calc
    for (int j=0; j<cards.ranks.size(); j++) {
      if (cards.ranks[j] == in[0]) {
        cards.strengths[j]++;
        break;
      }
      if (j == cards.ranks.size()-1) {
        cards.ranks.push_back(in[0]);
        cards.strengths.push_back(1);
      }
    }
  }
  // out
  int s = 0;
  for (int i : cards.strengths) {
    if (i > s) s = i;
  }
  s--;
  cout << s;
  return 0;
}