#include <iostream>
using namespace std;

void func(int &i) {
    i = 73;
    printf("Value is %d\n", i);
}

int main() {
    int x = 42;
    puts("This is main()");
    func(x); // Pass by value
    printf("X is %d\n", x);
    return 0;
}
