#include <cmath>
#include <cstdio>
#include <std::vector>
#include <iostream>
#include <algorithm>



class Difference {
    private:
    std::vector<int> elements;

  	public:
  	   int maximumDifference;
	  	Difference (std::vector<int> ele)
	  	{
	  	   this->elements=ele;
	  	}
	  	void computeDifference()
	  	{
	  	   //sort(elements.begin(), elements.end());
         //for(std::vector<int>::iterator itr=elements.begin(); itr!=elements.end()-1; ++itr)
         //maximumDifference=abs(elements[elements.size()-1]- elements[0]);
         //or
         maximumDifference=max_element(elements.begin(), elements.end())-
                           min_element(elements.begin(),elements.end());

	  	}
  	};

int main() {
    int N;
    std::cin >> N;

    std::vector<int> a;

    for (int i = 0; i < N; i++) {
        int e;
        std::cin >> e;

        a.push_back(e);
    }

    Difference d(a);

    d.computeDifference();

    std::cout << d.maximumDifference;

    return 0;
}
