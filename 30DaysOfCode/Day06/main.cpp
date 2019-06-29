#include <iostream>
#include <vector>
using namespace std;


int main()
{
    string input;
    int tests;
    vector<string> strings;
    
    cin >> tests;
    cin.ignore(); // Ignore the unhandled end of line character

    strings.reserve(tests);

    // Store each string in a vector of strings
    // this allows processing at a later time
    for(int i = 0; i < tests; i++)
    {
        getline(cin, input);
        strings.push_back(input);
    }

    // Step through each string in the vector
    for(string s : strings)
    {
        string first = "";
        string second = "";
        int count = 0;

        // Step through each character in the string
        // Count is used as a placeholder to calculate even
        // or odd values
        for(char c : s)
        {
            if(count % 2 == 0)
                second += c;
            else
                first += c;
            
            count++;
        }

        cout << second << " " << first << endl;
        count = 0;
    }

    return 0;
}
