#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0;i < n;++i)
       cin >> arr[i];
   for(vector<int>::reverse_iterator itr=arr.rbegin();
                                     itr!=arr.rend(); ++itr)
      cout<<*itr<<" ";

    return 0;
}
