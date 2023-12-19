//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  int N;
  scanf("%d", &N);
  int expenses = 0;
  while (N--) {
    int in;
    scanf("%d", &in);
    if (in < 0) {
      expenses -= in;
    }
  }
  printf("%d", expenses);
  return 0;
}