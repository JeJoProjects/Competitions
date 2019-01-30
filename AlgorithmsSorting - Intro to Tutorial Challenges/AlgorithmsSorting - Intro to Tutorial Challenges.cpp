#include <iostream>
#include <std::vector>


int main()
{
// V - the value that has to be searched.
// n - the size of the array.
// arr -  numbers that make up the array.
   int V=0, n=0;
   std::cin>>V;
   std::cin>>n;

   if(n>=1 && n<=1000)
   {
      if(V>=-1000 && V<=1000)
      {
         std::vector<int> arr(n); // array with given size
         unsigned int index_location=0; // answer of our problem

         for(unsigned int i=0;i<n; ++i)
            std::cin>>arr[i];

         for(unsigned int i=0; i<n; ++i)
            if(arr[i]==V)
            {
               index_location=i;
               break;
            }
         std::cout<<index_location<<std::endl;
      }
   }
   return 0;
}
