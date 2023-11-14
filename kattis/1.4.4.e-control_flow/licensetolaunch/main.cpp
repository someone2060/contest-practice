//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  int N;
  scanf("%d", &N);
  int min, day = 0;
  int in;
  scanf("%d", &in);
  min = in;
  for (int i=1; i<N; i++) {
    scanf("%d", &in);
    if (in < min) {
      min = in;
      day = i;
    }
  }
  printf("%d", day);
  return 0;
}