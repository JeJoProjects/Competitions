#include <bits/stdc++.h>
using namespace std;

int main()
{
   unsigned int n=0, SWAPS=0;
   cin >> n; //  number of elements in array or size
   vector<int> arr(n);
   for(unsigned int a_i = 0; a_i < n; a_i++)
       cin >> arr[a_i];

   for(unsigned int i=0; i<n; ++i)
   {
      for(unsigned int j=0; j<n-1; ++j)
         if(arr[j]>arr[j+1])
         {
            swap(arr[j], arr[j+1]);
            ++SWAPS;
         }
      if(SWAPS==0)
         break;
      cout<<"Loop"<<endl;
   }
   cout<<"Array is sorted in "<<SWAPS<<" swaps."<<endl;
   cout<<"First Element: "<<arr[0]<<endl;
   cout<<"Last Element: "<<arr[n-1]<<endl;
   return 0;
}
