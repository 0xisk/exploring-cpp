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

    int x = 42;
    int y = 7;

    if (x > y) {
        puts("Condition is true");
    } else {
        puts("Condition is false");
    }

    // Same on JavaScript
    printf("The greatest is: %d\n", x > y ? x : y);

    return 0;
}
