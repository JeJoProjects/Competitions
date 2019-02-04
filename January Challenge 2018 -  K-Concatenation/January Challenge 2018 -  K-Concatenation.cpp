#include <iostream>
#include <std::vector>
#include <algorithm>
#include <iterator>

using uint64 = unsigned long long int;
#define lli long long int
#define uli unsigned long int

lli maxSubArraySum(std::vector<lli> arr)//, uint64 size) // Time Complexity O(n)
{
   lli max_so_far = arr[0];
   lli curr_max = arr[0];

   std::vector<lli>::iterator itr;
   for(itr= arr.begin()+1; itr!=arr.end(); ++itr)
   {
        curr_max = max(*itr, curr_max+(*itr));
        max_so_far = max(max_so_far, curr_max);
   }
   return max_so_far;
}

int main()
{
   ios_base::sync_with_stdio(false);
   std::cin.tie(nullptr);
   std::cout.tie(nullptr);

   uli T=0;     //T denoting the number of test cases.
   std::cin>>T;
   if(1 <= T && T<=10)
   {
      for(uli queri=0; queri<T; ++queri)
      {
         uint64 N=0, K=0; // array A with size N (indexed from 0) and an integer K.
         std::cin>> N >> K;
         if( (1 <= N && N <= 100000) && (1 <= K && K<= 100000) )
         {
            std::vector<lli> A(N), B(N*K);

            std::vector<lli>::iterator itr=A.begin();
            uint64 idx=0;

            for(; itr!=A.end(); ++itr)
               {
                  std::cin>>*itr;
                  for(uint64 i=idx; i< (N*K) ; i=i+N)
                     B[i]=*itr;

                  ++idx;
               }
            //std::cout<< Maximum_Sum_Subarray(B)<<"\n";
            std::cout<< maxSubArraySum(B)<<std::endl;//, B.size()) <<std::endl;
         }
      }
   }
   return 0;
}
