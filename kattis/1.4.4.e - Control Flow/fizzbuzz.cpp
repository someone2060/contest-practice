//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  int X, Y, N;
  scanf("%d %d %d", &X, &Y, &N);
  for (int i=1; i<=N; i++) {
    int divisX = false, divisY = false;
    if (i%X == 0) {
      divisX = true;
      printf("Fizz");
    }
    if (i%Y == 0) {
      divisY = true;
      printf("Buzz");
    }
    if (!(divisX || divisY)) printf("%d", i);
    printf("\n");
  }
  return 0;
}