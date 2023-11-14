//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  int N;
  scanf("%d", &N);
  while (N--) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    // a is always > b
    if (a < b) {
      swap(a, b);
    }
    if (a+b == c) {
      printf("Possible\n");
    } else if (a-b == c) {
      printf("Possible\n");
    } else if (a*b == c) {
      printf("Possible\n");
    } else if (a/b == c && a%b == 0) {
      printf("Possible\n");
    } else {
      printf("Impossible\n");
    }
  }
  return 0;
}