//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  int N;
  scanf("%d", &N);
  bool passed = true;
  for (int i=0; i<N; i++) {
    int in;
    if (scanf("%d", &in) != 1) {
      char temp[6];
      scanf("%6c", &temp);
      continue;
    }
    if (in != i+1) {
      printf("something is fishy");
      passed = false;
      break;
    }
  }
  if (passed) printf("makes sense");
  return 0;
}