#include <bits/stdc++.h>
using namespace std;

void f(int i, int n)
{
    if (i > n)
        return;

    cout << "raj" << endl; // Correct way to print
    f(i + 1, n);           // Recursive call
}

int main()
{
    int n;
    cin >> n;
    f(1, n); // Start from 1
    return 0;
}
