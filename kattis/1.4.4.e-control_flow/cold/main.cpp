//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  int N;
  scanf("%d", &N);
  int days = 0;
  while (N--) {
    int in;
    scanf("%d", &in);
    if (in < 0) days++;
  }
  printf("%d", days);
  return 0;
}