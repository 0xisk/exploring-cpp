#include <iostream>
using namespace std;

// Forward declaration
void func();

int main() {
    puts("This is main()");
    func();
    return 0;
}

void func() {
    puts("This is func()");
}