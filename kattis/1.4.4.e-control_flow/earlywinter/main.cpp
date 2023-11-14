//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  int N;
  int dm;
  scanf("%d %d", &N, &dm);
  for (int i=0; i<N; i++) {
    int in;
    scanf("%d", &in);
    if (in <= dm) {
      printf("It hadn't snowed this early in %d years!", i);
      break;
    }
    if (i+1 == N) {
      printf("It had never snowed this early!");
    }
  }
  return 0;
}