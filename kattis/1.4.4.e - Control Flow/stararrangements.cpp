//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  int N;
  scanf("%d", &N);
  printf("%d:\n", N);
  for (int i=1; i<N/2+1; i++) {
    int a, b, test;
    // case i+1,i
    a = i+1;
    b = i;
    test = (N/(a+b)) * (a+b);
    if (test == N || test+a == N) {
      printf("%d,%d\n", a, b);
    }
    // case i+1,i+1
    if (N%a == 0) {
      printf("%d,%d\n", a, a);
    }
  }
  return 0;
}