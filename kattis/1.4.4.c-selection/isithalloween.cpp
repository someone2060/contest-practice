//#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string date;
    getline(cin, date);
    if (date == "OCT 31" || date == "DEC 25") {
        printf("yup");
    } else {
        printf("nope");
    }
    return 0;
}