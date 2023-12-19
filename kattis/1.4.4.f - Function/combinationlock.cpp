//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int rotateCW(int start, int end) {
  return (start < end) ? 40+start-end : start-end;
}

int rotateCCW(int start, int end) {
  return (end < start) ? 40+end-start : end-start;
}

int main()
{
  int a, b, c, d;
  while (true) {
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a+b+c+d == 0) break;
    //printf("debug: %d %d %d\n", rotateCW(a, b), rotateCCW(b, c), rotateCW(c, d)); //DEBUG
    int sum = rotateCW(a, b) +
      rotateCCW(b, c) +
      rotateCW(c, d) +
      120;
    sum *= 9;
    printf("%d\n", sum);
  }
  return 0;
}