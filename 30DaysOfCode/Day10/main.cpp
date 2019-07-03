#include <iostream>
#include <stack>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::stack;
using std::string;
using std::to_string;

string convertToBaseTwo(int number)
{
    stack<int> stk;
    string result = "";

    while(number > 0)
    {
        stk.push(number % 2);
        number = number / 2;
    }

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
    string result;
    cin >> number;
    cin.ignore();

    result = convertToBaseTwo(number);

    int consecutive = 0;
    int max = 0;
    bool last = false;

    for(char c : result)
    {
        if(c == '1')
        {
            last = true;
            consecutive++;
        }
        else
        {
            last = false;
            consecutive = 0;
        }

        if(max < consecutive) max = consecutive;
    }

    cout << max << endl;
    
    return 0;
}