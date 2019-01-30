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
	  	Difference (vector<int> ele)
	  	{
	  	   this->elements=ele;
	  	}
	  	void computeDifference()
	  	{
	  	   //sort(elements.begin(), elements.end());
         //for(vector<int>::iterator itr=elements.begin(); itr!=elements.end()-1; ++itr)
         //maximumDifference=abs(elements[elements.size()-1]- elements[0]);
         //or
         maximumDifference=max_element(elements.begin(), elements.end())-
                           min_element(elements.begin(),elements.end());

	  	}
  	};

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
