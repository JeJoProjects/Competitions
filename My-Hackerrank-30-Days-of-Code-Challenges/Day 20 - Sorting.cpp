#include <bits/stdc++.h>


int main()
{
   unsigned int n=0, SWAPS=0;
   std::cin >> n; //  number of elements in array or size
   std::vector<int> arr(n);
   for(unsigned int a_i = 0; a_i < n; a_i++)
       std::cin >> arr[a_i];

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
      std::cout<<"Loop"<<std::endl;
   }
   std::cout<<"Array is sorted in "<<SWAPS<<" swaps."<<std::endl;
   std::cout<<"First Element: "<<arr[0]<<std::endl;
   std::cout<<"Last Element: "<<arr[n-1]<<std::endl;
   return 0;
}
