#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() 
{
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int secondInteger = NULL;
    double secondDouble = NULL;
    string secondString = "";
    
    
    cin >> secondInteger;
    cin >> secondDouble;
    cin.ignore(); // Ignore the newline character
    getline(cin, secondString);

    // Print the sum of both integer variables on a new line.
    cout << i + secondInteger << endl;
    
    // Print the sum of the double variables on a new line.
    cout << fixed << setprecision(1) << d + secondDouble << endl;
    
    // Concatenate and print the String variables on a new line
    cout << s << secondString << endl;

    return 0;
}