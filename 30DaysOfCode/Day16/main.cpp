#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::stoi;
using std::string;

int main()
{
    string S;
    cin >> S;

    int result = NULL;
    
    try
    {
        result = stoi(S);
        cout << result << endl;
    }
    catch(std::exception e)
    {
        cout << "Bad String" << endl;
    }
    
    return 0;
}
