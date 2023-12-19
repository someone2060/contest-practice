//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  // in
  int R, C;
  scanf("%d %d", &R, &C);
  vector<vector<char>> grid(R);
  for (int i=0; i<R; i++) {
    char in[201];
    scanf("%200s", &in);
    vector<char> temp(C);
    for (int j=0; j<C; j++) {
      temp[j] = in[j];
    }
    grid[i] = temp;
  }
  // calc
  int crntR = 0, crntC = 0;
  int counter = 0;
  while (true) {
    switch (grid[crntR][crntC]) {
      case 'N':
        crntR--;
        break;
      case 'S':
        crntR++;
        break;
      case 'W':
        crntC--;
        break;
      case 'E':
        crntC++;
        break;
      case 'T':
        counter = -1;
        break;
    }
    counter++;
    //printf("debug: %d %d %d\n", crntR, crntC, counter); //DEBUG
    // Out
    if (crntR < 0 ||
        crntR > R-1 ||
        crntC < 0 ||
        crntC > C-1) {
      printf("Out");
      break;
    }
    // Found
    if (grid[crntR][crntC] == 'T') {
      printf("%d", counter);
      break;
    }
    // Lost
    if (counter > R*C) {
      printf("Lost");
      break;
    }
  }
  return 0;
}