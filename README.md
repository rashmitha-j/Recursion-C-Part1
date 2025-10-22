# Basic Recursion in C++

This repository contains simple examples of recursion in C++, designed for beginners who want to understand how recursive functions work.

---

##  What is Recursion?

Recursion is a programming technique where a function calls itself to solve a smaller instance of the same problem. Every recursive function must have:

-  A base case to stop the recursion.
-  A recursive case that breaks the problem down.

---

##  Example: Factorial in C++

```cpp
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1; // Base case
    }
    return n * factorial(n - 1); // Recursive case
}

int main() {
    int number = 5;
    cout << "Factorial of " << number << " is " << factorial(number) << endl;
    return 0;
}
