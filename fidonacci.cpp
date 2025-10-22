#include <iostream>
using namespace std;

int f(int n)
{
    if (n <= 1)
        return n; // base case

    int last = f(n - 1);  // recursive call for (n-1)
    int slast = f(n - 2); // recursive call for (n-2)

    return last + slast; // combine results
}

int main()
{
    int n = 4;
    cout << f(n);
    return 0;
}