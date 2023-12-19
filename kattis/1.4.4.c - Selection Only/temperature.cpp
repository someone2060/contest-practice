//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    float X, Y;
    scanf("%f %f", &X, &Y);
    if (X == 0 && Y == 1) {
        printf("ALL GOOD");
    } else if (X != 0 && Y == 1) {
        printf("IMPOSSIBLE");
    } else {
        float sameTemp = (-1*X) / (Y-1);
        printf("%.6f", sameTemp);
    }
    return 0;
}