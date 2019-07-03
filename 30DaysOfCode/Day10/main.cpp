#include <iostream>
#include <stack>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::stack;
using std::string;
using std::to_string;

/**
 * Converts a base 10 number to base 2
 * @param number The number to be converted to base 2
 * @return A string representing the base 2 version of the number
 */
string convertToBaseTwo(int number)
{
    stack<int> stk;
    string result = "";

    // Populate the stack
    while(number > 0)
    {
        stk.push(number % 2);
        number = number / 2;
    }

    // Build the result string by popping off numbers
    while(!stk.empty())
    {
        result += to_string(stk.top());
        stk.pop();
    }

    return result;
}

int main()
{
    int number = 0;
    cin >> number; // Get a number from the user
    cin.ignore();  // Ignore trailing new line characters

    string result;
    result = convertToBaseTwo(number);

    int consecutive = 0;
    int max = 0;

    // Loop over every character in result
    for(char c : result)
    {
        // Increment consecutive count if character is 1
        if(c == '1') consecutive++;

        // Reset counter if character is anything other than 1
        else consecutive = 0;

        // Keep track of max value of consecutive
        if(max < consecutive) max = consecutive;
    }

    // Send max to STDOUT
    cout << max << endl;
    
    return 0;
}