#include <iostream>
using namespace std;

int main() {
    //int x;
    //x = 42;

    //const int i = 7;

    //int x = 7;
    //int *ip = &x;

    // Reference
    // References are immutable cannot change it
    //int &y = x;

    //printf("x is %d\n", x);
    //printf("y is %d\n", y);
    //printf("ip is %d\n", *ip);

    // %d is a token for printf where it puts the integer value
    //printf("I is %d\n", i);

    /*
    char s[] = { 's', 't', 'r', 'i', 'n', 'g' };
    char a[] = "Array 2";

    printf("String is: %s\n", s);

    for(int i = 0; s[i]; ++i) {
        //printf("String is: %c\n", s[i]);
    }

    for(char *cp = s; *cp; ++cp) {
        //printf("String is: %c\n", *cp);
    }

    for(char c : s) {
        if(c == 0) break;
        printf("String is: %c\n", c);
    }
     */
    //printf("String is: %s\n", s2);

    /*
    int x = 42;
    int y = 7;

    if (x > y) {
        puts("Condition is true");
    } else {
        puts("Condition is false");
    }

    // Same on JavaScript
    printf("The greatest is: %d\n", x > y ? x : y);
    */

    /*
    const int iOne = 1;
    const int iTwo = 2;
    const int iThree = 3;
    const int iFour = 4;

    int x = 1;

    switch (x) {
        case iOne:
            puts("One");
            break;
        case iTwo:
            puts("Two");
            break;
        case iThree:
            puts("Three");
            break;
        case iFour:
            puts("Four");
            break;

        default:
            puts("Default");
            break;
    }
    */

    /*int a[] = { 1, 2, 3, 4, 5 };
    int i = 0;

    while(i < 5) {
        printf("Element %d is %d\n ", i, a[i]);
        ++i;
    }

    do {
        printf("Element %d is %d\n ", i, a[i]);
        ++i;
    } while (i < 5);*/

    int a[] = { 1, 2, 3, 4, 5 };
    for(int i = 0; i < 5; ++i) {
        printf("Element %d is %d\n ", i, a[i]);
    }
    return 0;
}
