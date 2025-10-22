#include <bits/stdc++.h>
using namespace std;

int cnt = 0;

void print()
{
    if (cnt == 6)
        return; // Just stop recursion

    cout << cnt << endl;
    cnt++;
    print(); // Recursive call
}

int main()
{
    print();
    return 0;
}
