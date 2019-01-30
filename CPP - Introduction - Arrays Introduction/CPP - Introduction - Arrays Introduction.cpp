#include <iostream>
#include <std::vector>


int main(){
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for(int i = 0;i < n;++i)
       std::cin >> arr[i];
   for(std::vector<int>::reverse_iterator itr=arr.rbegin();
                                     itr!=arr.rend(); ++itr)
      std::cout<<*itr<<" ";

    return 0;
}
