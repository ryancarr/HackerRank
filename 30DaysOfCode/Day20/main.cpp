#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    
    // Load values into vector
    for(int a_i = 0; a_i < n; a_i++)
    {
        cin >> a[a_i];
    }
    
    // We need to keep track of
    // totalSwaps so we can let
    // the user know how many
    // swaps were performed
    int totalSwaps = 0;

    // Sets the main logic back to the
    // beginning of the array. Without
    // this reset the values would only
    // move one position to the right.
    for(int i = 0; i < n; i++)
    {
        int numberOfSwaps = 0;

        // Main logic of the sort swaps
        // any pair of values that are in
        // descending order instead of
        // ascending order
        for(int j = 0; j < n - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                // Swap values
                int temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;

                numberOfSwaps++;
            }
        }

        totalSwaps += numberOfSwaps;

        if(numberOfSwaps == 0)
            break;
    }

    cout << "Array is sorted in " << totalSwaps << " swaps." << endl;
    cout << "First Element: " << a[0] << endl;
    cout << "Last Element: " << a[n -1] << endl;
    
    return 0;
}