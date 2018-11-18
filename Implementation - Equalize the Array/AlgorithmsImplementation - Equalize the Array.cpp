#include <bits/stdc++.h>
#include "johnlib.h"
using namespace std;

int main()
{
   int size; cin >> size;
   multiset<int> arr;

   for(int i=0; i<size; ++i)
   {
       int temp=0; cin>>temp;
       arr.insert(temp);
   }

   int count=1, Max_Fre=0;
   // Here itr through out the multi-set, but skip the first position
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
   cout<<size-Max_Fre<<endl;
   return 0;
}

// or simply

int main()
{
   int n=0,max=0,q;
   cin>>n;

   map<int,int>m;

   for(int i=0;i<n;i++)
   {
        cin>>q;
        m[q]++;
        if(m[q]>max)
        max=m[q];

   }
   /*for(auto it=m.begin(); it!=m.end(); ++it)
       cout<<it->first<<" "<<it->second<<endl;*/

   cout<<n-max;
   return 0;
}
