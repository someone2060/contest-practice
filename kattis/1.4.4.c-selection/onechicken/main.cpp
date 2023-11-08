//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    if (M > N) {
        if (M-N == 1) {
            printf("Dr. Chaz will have 1 piece of chicken left over!");
        } else {
            printf("Dr. Chaz will have %d pieces of chicken left over!", M-N);
        }
    } else {
        if (N-M == 1) {
            printf("Dr. Chaz needs 1 more piece of chicken!");
        } else {
            printf("Dr. Chaz needs %d more pieces of chicken!", N-M);
        }

    }
    return 0;
}