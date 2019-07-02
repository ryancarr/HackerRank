#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int factorial(int n)
{
    // Base case for the function
    if(n == 1)
        return n;
    else
        return n * factorial(n -1);    
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    int result = factorial(n);

    cout << result << endl;

    return 0;
}