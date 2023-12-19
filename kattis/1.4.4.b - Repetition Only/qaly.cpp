//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int N;
    scanf("%d", &N);
    float q, y;
    float qaly = 0;
    while (N--) {
        scanf("%f %f", &q, &y);
        qaly += q*y;
    }
    printf("%.3f", qaly);
    return 0;
}