//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  // in vars
  int time;
  char question[2];
  char result[6];
  // calc vars
  bool isRight;
  vector<int> penalties(26, 0);
  // out vars
  int solved = 0, totalTime = 0;
  // calc
  while (cin >> time, (time > 0)) {
    cin >> question >> result;
    isRight = (result[0] == 'r');
    int index = question[0] - 65; //index 0-25
    // already solved
    if (penalties[index] == -1) {
      continue;
    }
    // wrong
    if (!isRight) {
      penalties[index] += 20;
      continue;
    }
    // right
    solved++;
    totalTime += time + penalties[index];
    penalties[index] = -1;
  }
  // out
  cout << solved << " " << totalTime << "\n";
  /*for (int i : penalties) {
    printf("%d ", i);
  }//DEBUG */
  return 0;
}
/*
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z wrong
300 Z right
-1

*/