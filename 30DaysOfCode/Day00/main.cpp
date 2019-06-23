#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    // Declare a variable named 'input_string' to hold our input.
    string input_string;

    // Read a full line of input from stdin (cin) and save it to our variable, input_string.
    getline(cin, input_string);

    // Print a string literal saying "Hello, World." to stdout using cout.
    cout << "Hello, World." << endl;

    // Print the input brought in from stdin to stdout using cout.
    cout << input_string << endl;

    return 0;
}