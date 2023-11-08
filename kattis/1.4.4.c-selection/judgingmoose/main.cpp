//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int l, r;
    scanf("%d %d", &l, &r);
    if (l < r) { //l always larger than r
        swap(l, r);
    }
    if (l == 0) {
        printf("Not a moose");
    } else if (l == r) {
        printf("Even %d", 2*l);
    } else {
        printf("Odd %d", 2*l);
    }
    return 0;
}