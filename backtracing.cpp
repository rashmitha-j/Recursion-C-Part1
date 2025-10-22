#include <bits/stdc++.h>
using namespace std;

void f(int i, int N)
{
    if (i > N)
        return;

    f(i + 1, N);       // recursive call first (go deeper)
    cout << i << endl; // print after recursion (on the way back)
}

int main()
{
    int n;
    cin >> n;
    f(1, n);
    return 0;
}
