//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int G, S, C;
    scanf("%d %d %d", &G, &S, &C);
    int buying = 3*G + 2*S + C;
    // victory cards
    if (buying >= 8) {
        printf("Province or ");
    } else if (buying >= 5) {
        printf("Duchy or ");
    } else if (buying >= 2) {
        printf("Estate or ");
    }
    // treasure cards
    if (buying >= 6) {
        printf("Gold");
    } else if (buying >= 3) {
        printf("Silver");
    } else {
        printf("Copper");
    }
    return 0;
}