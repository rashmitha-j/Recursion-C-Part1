#include <bits/stdc++.h>
using namespace std;

void f(int i)
{
    if (i < 1) // base case: stop when i goes below 1
        return;

    cout << i << endl; // print current number
    f(i - 1);          // recursive call with i - 1
}

int main()
{
    int n;
    cin >> n;
    f(n); // start from n
    return 0;
}
