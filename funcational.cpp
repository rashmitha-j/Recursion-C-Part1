#include <bits/stdc++.h>
using namespace std;

int f(int n)
{
    if (n == 0)
        return 0;
    else
        return n + f(n - 1);
}

int main()
{
    int n = 3;
    cout << f(n) << endl;
    return 0;
}
