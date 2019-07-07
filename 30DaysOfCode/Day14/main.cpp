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
        int max, min;        
        maximumDifference = numeric_limits<int>::min();
        max = maximumDifference;
        min = numeric_limits<int>::max();

        // Finding the min and max value across the whole
        // vector is more efficient than traversing it multiple
        // times checking each value against every other value
        for(int i = 0; i < elements.size(); i++)
        {
            int temp = elements[i];
            if(temp < min)
                min = temp;
            if(max < temp)
                max = temp;
        }

        maximumDifference = abs(min - max);
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