#include <iostream>
#include <std::vector>
#include <algorithm>
#include <cmath>

int partition(std::std::vector<int>& arr, int left, int right, int pivotIndex) {
    auto pivotValue = arr[pivotIndex];
    std::swap (arr[pivotIndex], arr[right]);  // Move pivot to end
    auto storeIndex = left;
    for(int i = left; i < right; ++i)
        if(arr[i] < pivotValue) {
            std::swap (arr[storeIndex], arr[i]);
            ++storeIndex;
        }
    std::swap(arr[right], arr[storeIndex]);  // Move pivot to its final place
    return storeIndex;
}


int quickSelect(std::std::vector<int>& arr, int left, int right, int k) {
    if(left == right)        // If the list contains only one element,
        return arr[left];  // return that element
    auto pivotIndex  = left + std::floor(rand() % (right - left + 1));    // select a pivotIndex between left and right,
    // e.g., left + floor(rand() % (right - left + 1))
    pivotIndex  = partition(arr, left, right, pivotIndex);
    // The pivot is in its final sorted position
    if(k == pivotIndex)
        return arr[k];
    else if(k < pivotIndex)
        return quickSelect(arr, left, pivotIndex - 1, k);
    else
        return quickSelect(arr, pivotIndex + 1, right, k);
}

int main() {

    auto n = 0;
    std::std::cin >> n;
    std::std::vector<int> arr(n, 0);
    for(int i = 0; i < n; ++ i)
        std::std::cin >> arr[i];
    std::std::cout << quickSelect(arr, 0, n - 1, n / 2) << std::std::endl;

    return 0;
}
// or but above one is good!
/*#include <iostream>
#include <std::vector>
#include <algorithm>


int MEADIAN(std::vector<int> &vec)
{
   int mid=vec.size()/2;
   sort(vec.begin(), vec.end());
   return vec[mid];
}

int main()
{
   unsigned int N=0;
   std::cin>>N; //the size of the array
   if(N>=1 && (N%2!=0 && N<=1000001))
   {
      int temp=0;
      std::vector<int> x;
      for(unsigned int i=0; i<N; ++i)
      {
         std::cin>>temp;
         if (temp>=-10000 && temp<=10000)
            x.push_back(temp);
      }
      std::cout<<MEADIAN(x)<<std::endl;
   }
    return 0;
}
*/
