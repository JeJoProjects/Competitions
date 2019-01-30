#include <bits/stdc++.h>


typedef unsigned long long int   uint64;
int main()
{


   uint64 n; //students
   uint64 m; // the number of available classes.
   std::cin>>n >>m;


   unordered_map<uint64, uint64> classStudent;
   for(auto i=0; i<n; ++i)
   {
       uint64 temp = 0;
       std::cin>>temp;
       classStudent[temp]++;
   }

   for(auto i=0; i<m; ++i)
   {
       auto gett = classStudent.find(i);
       if(gett != classStudent.cend())
        std::cout<<gett->second<<" ";
       else
        std::cout<<"0"<<" ";
   }

   return 0;
}
