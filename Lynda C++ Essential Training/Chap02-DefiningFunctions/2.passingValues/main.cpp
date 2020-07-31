#include <iostream>
#include <string>
using namespace std;

void func(const string &fs) {
    printf("Value is %s\n", fs.c_str());
}

int main() {
    string s = "Hello Im a string";
    puts("This is main()");
    func(s); // Pass by value
    printf("String is %s\n", s.c_str());
    return 0;
}
