#include <iostream>
using namespace std;

int main() {
    //int x;
    //x = 42;

    //const int i = 7;

    int x = 7;
    int *ip = &x;

    // Reference
    // References are immutable cannot change it
    int &y = x;

    printf("x is %d\n", x);
    printf("y is %d\n", y);
    printf("ip is %d\n", *ip);

    // %d is a token for printf where it puts the integer value
    //printf("I is %d\n", i);
    return 0;
}
