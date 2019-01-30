#include <bits/stdc++.h>
#include "johnlib.h"


int main()
{
   int size; std::cin >> size;
   std::multiset<int> arr;

   for(int i=0; i<size; ++i)
   {
       int temp=0; std::cin>>temp;
       arr.insert(temp);
   }

   int count=1, Max_Fre=0;
   // Here itr through out the multi-std::set, but skip the first position
   for(auto itr=arr.begin(); itr!=arr.end(); ++itr)
      if(itr!=arr.begin())
      {
         int a=*(--itr); // itr, step back one position.
         int b=*(++itr); // itr, move forward to current position(forward).
         (a==b) ? ++count : count=1;
         Max_Fre=max(count, Max_Fre);
        // find the frequency of the element which is maximum.
      }
   // print the no. of elements which = size-frequency of maximum occurred element
   std::cout<<size-Max_Fre<<std::endl;
   return 0;
}

// or simply

int main()
{
   int n=0,max=0,q;
   std::cin>>n;

   std::map<int,int>m;

   for(int i=0;i<n;i++)
   {
        std::cin>>q;
        m[q]++;
        if(m[q]>max)
        max=m[q];

   }
   /*for(auto it=m.begin(); it!=m.end(); ++it)
       std::cout<<it->first<<" "<<it->second<<std::endl;*/

   std::cout<<n-max;
   return 0;
}
