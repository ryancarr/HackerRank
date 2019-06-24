#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int a, b, c;

    // Reads in three space separated numbers into variables a b and c
    // No error checking is in place so the code is vulnerable to incorrect input
    cin >> a >> b >> c;

    cout << a + b + c;

    return 0;
}