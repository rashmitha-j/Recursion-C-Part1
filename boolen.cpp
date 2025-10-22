#include <iostream>
using namespace std;

bool isPalindrome(int i, string s)
{
    // Base condition: If we checked half of the string
    if (i >= s.size() / 2)
        return true;

    // If characters from both ends are not equal
    if (s[i] != s[s.size() - i - 1])
        return false;

    // Move towards the middle
    return isPalindrome(i + 1, s);
}

int main()
{
    string s = "madam"; // You can change this word
    if (isPalindrome(0, s))
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;
    return 0;
}