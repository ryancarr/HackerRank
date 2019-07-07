#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

	Difference(vector<int> e) { elements = e; }

	void computeDifference()
    {
        maximumDifference = numeric_limits<int>::min();

        // Nested loops works, but isn't efficient
        // A better solution might be to find the min and max
        // number in the whole vector and calculate their
        // difference at the end
        for(int i = 0; i < elements.size(); i++)
        {
            for(int j = 0; j < elements.size(); j++)
            {
                int difference = abs(elements[i] - elements[j]);
                if(difference > maximumDifference)
                    maximumDifference = difference;
            }
        }
    }

}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}