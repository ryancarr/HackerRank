#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int number)
{
    // Only 2 or odd numbers larger than 2 are prime
    if(number < 2 || (number % 2 == 0 && number != 2))
        return false;

    // We only need to check numbers less than or equal
    // to the square root of our target number
    for (int i = 2; i <= sqrt(number); i++) 
        if (number % i == 0) 
            return false; 

    return true;
}

int main()
{
    int quantity;
    cin >> quantity;

    vector<int> numbers;
    numbers.reserve(quantity);

    for(int i = 0; i < quantity; i++)
    {
        int number;
        cin >> number;
        numbers.push_back(number);
    }

    for(int number : numbers)
    {
        if(isPrime(number))
            cout << "Prime" << endl;
        else
            cout << "Not prime" << endl;
        
    }


    return 0;
}
