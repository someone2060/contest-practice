//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  int N;
  scanf("%d", &N);
  while (N--) {
    int r, e, c;
    scanf("%d %d %d", &r, &e, &c);
    int fromAdvert = e-c;
    if (fromAdvert > r) {
      printf("advertise\n");
    } else if (fromAdvert < r) {
      printf("do not advertise\n");
    } else {
      printf("does not matter\n");
    }
  }
  return 0;
}