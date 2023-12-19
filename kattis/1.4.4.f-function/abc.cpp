//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  int A, B, C;
  char order[3];
  scanf("%d %d %d", &A, &B, &C);
  scanf("%3s", &order);
  if (A>B) swap(A, B);
  if (B>C) swap(B, C);
  if (A>B) swap(A, B);
  for (char i : order) {
    if (i == 'A') printf("%d ", A);
    if (i == 'B') printf("%d ", B);
    if (i == 'C') printf("%d ", C);
  }
  return 0;
}