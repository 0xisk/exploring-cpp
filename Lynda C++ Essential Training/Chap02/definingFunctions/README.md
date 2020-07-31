# Defining Functions: 

All code in C++ happens in functions, starting with the main() function.

A function is a block of code, that maybe called by and may return a value to other code. It allows
you to generalize and marginalize your code, by creating containers for logical subsets of code, and by 
allowing code to be reused.

Function arguments are passed to functions by value, so when you call a function and pass it a variable, a copy
of the variable is passed to the function. If the function then changes that value, the callers copy remains unchanged.

For example:

```c++
int a = 1;
f(a); // pass the value of var a rather than it's reference(address)
printf("a is %d\n", a);
```

```c++
void f(int a) {
    ++a;
}
```

The alternative to Call-by-value is Call-by-reference. To implement Call-by-reference, you must do so explicitly. The 
advantage here is that you will know by reading the code that a reference is being passed and there maybe side effects.

As in this example, 

```c++
int a = 1;
f(&a); // pass the reference(address) of var a rather than it's value
printf("a is %d\n", a);
```

```c++
void f(int* p) { 
    // The asterisk - is called the Pointer dereference operator.
    ++(*p);
}
```

In c++, you may also use the reference type:

```c++
int a = 1;
f(a); // pass the value of var a rather than it's reference(address)
printf("a is %d\n", a);
```

```c++
void f(int &p) {
    ++p;
}
```