#include <bits/stdc++.h>
using namespace std;

// Function to calculate sum from 1 to n recursively
int sum(int n)
{
    if (n == 0) // base case: sum of 0 is 0
        return 0;
    else
        return n + sum(n - 1); // sum current n plus sum of numbers before it
}

int main()
{
    int n;
    cin >> n;               // read input number
    cout << sum(n) << endl; // call sum function and print the result
    return 0;
}
