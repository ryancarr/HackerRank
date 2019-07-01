#include <iostream>
#include <istream>
#include <iterator>
#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::istringstream;
using std::istream_iterator;
using std::string;
using std::unordered_map;
using std::vector;

vector<string> splitString(string);


int main()
{
    unordered_map<string, string> phoneBook;
    string line;

    int count;
    cin >> count;
    cin.ignore();

    for(int i = 0; i < count; i++)
    {
        getline(cin, line);
        vector<string> values = splitString(line);

        phoneBook[values[0]] = values[1];
    }

    while(getline(cin, line))
    {
        auto position = phoneBook.find(line);

        if(position == phoneBook.end())
            cout << "Not found" << endl;
        else
            cout << position->first << "=" << position->second << endl;
        
    }

    return 0;
}

/**
 * Splits a string on the white space
 * @param line The string to be split
 * @return A vector containing individual words in each index
 */
vector<string> splitString(string line)
{
    istringstream buff(line);
    istream_iterator<string> begin(buff), end;
    vector<string> values(begin, end);

    return values;
}
