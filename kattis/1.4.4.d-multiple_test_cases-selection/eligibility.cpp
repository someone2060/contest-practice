//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int N;
    scanf("%d", &N);
    char nameChar[30];
    string name;
    int yearStudies, yearBorn, courses, placeholder;
    while (scanf("%30s %d/%d/%d %d/%d/%d %d", 
            &nameChar,
            &yearStudies, &placeholder, &placeholder,
            &yearBorn, &placeholder, &placeholder,
            &courses) != EOF) {
        name = nameChar;
        printf("%s ", name.c_str());
        if (yearStudies >= 2010 || yearBorn >= 1991) {
            printf("eligible\n");
        } else if (courses >= 41) {
            printf("ineligible\n");
        } else {
            printf("coach petitions\n");
        }
    }
    return 0;
}