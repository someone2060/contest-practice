//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  int N;
  scanf("%d", &N);
  while (N--) {
    int P, R, F;
    scanf("%d %d %d", &P, &R, &F);
    int years = 0;
    while (P*pow(R, years) <= F) {
      years++;
    }
    printf("%d\n", years);
  }
  return 0;
}