#include <vector>
#include <iostream>
using namespace std;


int main()
{
    vector<int> actual(3);
    vector<int> expected(3);

    int fine;

    cin >> actual[0] >> actual[1] >> actual[2];
    cin >> expected[0] >> expected[1] >> expected[2];
    
    if(actual[2] > expected[2])
        fine = 10000;
    else if(actual[1] > expected[1] && actual[2] >= expected[2])
        fine = 500 * (actual[1] - expected[1]);
    else if(actual[0] > expected[0] && actual[1] >= expected[1] && actual[2] >= expected[2])
        fine = 15 * (actual[0] - expected[0]);
    else
        fine = 0;

    cout << fine;
    
    return 0;
}
