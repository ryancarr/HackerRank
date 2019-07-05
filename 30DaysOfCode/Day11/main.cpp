#include <bits/stdc++.h>

using namespace std;



int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++)
    {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++)
        {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // Set max to minimum possible number represented by int
    int max = std::numeric_limits<int>::min();

    for(int i = 0; i < arr.size() - 2;i++)
    {
        int sum = 0;

        for(int j = 0; j < arr[i].size() - 2;j++)
        {
            // Add top cross piece
            sum = arr[i][j] + arr[i][j+1] + arr[i][j+2];
            
            // Add middle square
            sum += arr[i+1][j+1];

            // Add bottom cross piece
            sum += arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];

            if(max < sum) max = sum;
        }
    }

    cout << max;

    return 0;
}
