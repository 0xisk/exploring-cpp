#include <iostream>
using namespace std;

void func(int i) {
    printf("Value is %d\n", i);
}

int main() {
    puts("This is main()");
    func(33); // Pass by value
    return 0;
}
