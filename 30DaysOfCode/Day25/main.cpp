#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// Brute force prime number finder
// VERY inefficient
// I was hoping it might work for HackerRank
bool isPrime(int number)
{
    if(number < 2 || (number % 2 == 0 && number != 2))
        return false;
    
    for(int i = 3; i < number / 2 + 1; i++)
    {
        if(number % i == 0)
        {
            return false;
        }
    }

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
