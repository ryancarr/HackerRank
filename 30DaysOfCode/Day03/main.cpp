#include <bits/stdc++.h>

using namespace std;



int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    bool isEven = (N % 2 == 0);
        
    // If n is odd, print Weird
    if(!isEven)
        cout << "Weird" << endl;
    // If n is even and in the inclusive range of 2 to 5, print Not Weird
    else if(isEven && (2 <= N && N <= 5))
        cout << "Not Weird" << endl;
    // If n is even and in the inclusive range of 6 to 20, print Weird
    else if(isEven && (6 <= N && N <= 20))
        cout << "Weird" << endl;
    // If n is even and greater than 20, print Not Weird
    else if(isEven && N > 20)
        cout << "Not Weird" << endl;

    return 0;
}
