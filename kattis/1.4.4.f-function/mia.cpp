//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool isMia(int roll)
{
  if (roll == 21) return true;
  return false;
}

bool isDoubles(int roll)
{
  if (roll%11 == 0) return true;
  return false;
}

// oh god this is so ugly
int main()
{
  int s0, s1, r0, r1;
  while (true) {
    scanf("%d %d %d %d", &s0, &s1, &r0, &r1);
    if (s0+s1+r0+r1 == 0) break;
    if (s0 < s1) swap (s0, s1); // s0 always > s1
    if (r0 < r1) swap (r0, r1); // r0 always > r1
    // convert to int
    int s, r;
    s = s0*10 + s1;
    r = r0*10 + r1;
    // check for mia
    if (isMia(s) || isMia(r)) {
      if (isMia(s) && isMia(r)) {
        printf("Tie.\n");
        continue;
      }
      if (isMia(s)) printf("Player 1 wins.\n");
      if (isMia(r)) printf("Player 2 wins.\n");
      continue;
    }
    // check for doubles
    if (isDoubles(s) || isDoubles(r)) {
      if (isDoubles(s) && isDoubles(r)) {
        if (s0 == r0) {
          printf("Tie.\n");
          continue;
        }
        (s0 > r0) ? printf("Player 1 wins.\n") : printf("Player 2 wins.\n");
        continue;
      }
      if (isDoubles(s)) printf("Player 1 wins.\n");
      if (isDoubles(r)) printf("Player 2 wins.\n");
      continue;
    }
    if (s == r) {
      printf("Tie.\n");
      continue;
    }
    (s > r) ? printf("Player 1 wins.\n") : printf("Player 2 wins.\n");
  }
  return 0;
}