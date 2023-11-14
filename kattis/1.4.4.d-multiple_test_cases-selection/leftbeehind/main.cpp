//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  int sour, sweet;
  while (true) {
    scanf("%d %d", &sweet, &sour);
    if (sweet+sour == 0) {
      break;
    }
    if (sweet+sour == 13) {
      printf("Never speak again.\n");
    } else if (sweet > sour) {
      printf("To the convention.\n");
    } else if (sweet < sour) {
      printf("Left beehind.\n");
    } else {
      printf("Undecided.\n");
    }
  }
  return 0;
}