#include <bits/stdc++.h>
using namespace std;

vector<string> split_string(string);

int main()
{
    int N;
    cin >> N;

    // Ignore trailing newline character
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Ends with @gmail.com
    regex email ("@gmail.com$");
    
    vector<string> names;

    for (int N_itr = 0; N_itr < N; N_itr++)
    {
        // Bring in name and email address
        string firstNameEmailID_temp;
        getline(cin, firstNameEmailID_temp);

        // Split the first name and email address on the space
        vector<string> firstNameEmailID = split_string(firstNameEmailID_temp);

        // Store first name and email address in new variables
        string firstName = firstNameEmailID[0];
        string emailID = firstNameEmailID[1];

        if(regex_search (emailID, email))
            names.push_back(firstName);
    }

    // Sort names
    sort(names.begin(), names.end());

    // Print out names on individual lines in sorted order
    for(string name : names)
        cout << name << endl;

    return 0;
}

/**
 * split_string splits a string on spaces
 * @param input_string the string to split
 * @return vector of strings comtaining each individual word
 */
vector<string> split_string(string input_string)
{
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y)
    {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ')
    {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos)
    {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}