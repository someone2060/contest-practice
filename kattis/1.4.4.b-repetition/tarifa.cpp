//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int X, N;
    scanf("%d", &X);
    scanf("%d", &N);
    int MB = X;
    int P;
    while (N--) {
        scanf("%d", &P);
        MB += X-P;
    }
    printf("%d", MB);
    return 0;
}