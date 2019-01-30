#include <iostream>
#include <vector>
using namespace std;

int main()
{
// V - the value that has to be searched.
// n - the size of the array.
// arr -  numbers that make up the array.
   int V=0, n=0;
   cin>>V;
   cin>>n;

   if(n>=1 && n<=1000)
   {
      if(V>=-1000 && V<=1000)
      {
         vector<int> arr(n); // array with given size
         unsigned int index_location=0; // answer of our problem

         for(unsigned int i=0;i<n; ++i)
            cin>>arr[i];

         for(unsigned int i=0; i<n; ++i)
            if(arr[i]==V)
            {
               index_location=i;
               break;
            }
         cout<<index_location<<endl;
      }
   }
   return 0;
}
