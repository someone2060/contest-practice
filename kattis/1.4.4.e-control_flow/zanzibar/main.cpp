//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  int N;
  scanf("%d", &N);
  while (N--) {    
    int imports = 0;
    int pIn = 1;
    while (true) {
      int in;
      scanf("%d", &in);
      if (in == 0) {
        break;
      }
      if (pIn*2 < in) {
        imports += in - pIn*2;
      }
      pIn = in;
    }
    printf("%d\n", imports);
  }
  return 0;
}