//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  int N;
  scanf("%d", &N);
  while (N--) {
    int a, b;
    if (scanf("%d+%d", &a, &b) != 2) {
      char temp[4];
      scanf("%4s", temp);
      printf("skipped\n");
    } else {
      printf("%d\n", a+b);
    }
  }
  return 0;
}