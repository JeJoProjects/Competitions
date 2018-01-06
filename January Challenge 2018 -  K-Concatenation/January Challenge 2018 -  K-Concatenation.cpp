#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
#define ull unsigned long long int
#define lli long long int
#define uli unsigned long int

/*lli Maximum_Sum_Subarray(vector<lli> arr)	// Overall Time Complexity O(n)
{
   lli ans=0, sum=0;
   bool testing_negtive=true;
   vector<lli>::iterator itr;

   for(itr= arr.begin(); itr!=arr.end(); ++itr)
   {
      if(sum + *itr > 0)
         sum+=(*itr);
      else
         sum  = 0;

      if(*itr>0)
         testing_negtive=false; // if Max < 0 return Max

      ans = max(ans,sum);
   }

   if(testing_negtive)
      return *max_element(arr.begin(), arr.end());
	else
		return ans;
}
*/
// or
// The implementation handles the case when all numbers in array are negative.
lli maxSubArraySum(vector<lli> arr)//, ull size) // Time Complexity O(n)
{
   lli max_so_far = arr[0];
   lli curr_max = arr[0];

   vector<lli>::iterator itr;
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
   cin.tie(nullptr);
   cout.tie(nullptr);

   uli T=0;     //T denoting the number of test cases.
   cin>>T;
   if(1 <= T && T<=10)
   {
      for(uli queri=0; queri<T; ++queri)
      {
         ull N=0, K=0; // array A with size N (indexed from 0) and an integer K.
         cin>> N >> K;
         if( (1 <= N && N <= 100000) && (1 <= K && K<= 100000) )
         {
            vector<lli> A(N), B(N*K);

            vector<lli>::iterator itr=A.begin();
            ull idx=0;

            for(; itr!=A.end(); ++itr)
               {
                  cin>>*itr;
                  for(ull i=idx; i< (N*K) ; i=i+N)
                     B[i]=*itr;

                  ++idx;
               }
            //cout<< Maximum_Sum_Subarray(B)<<"\n";
            cout<< maxSubArraySum(B)<<endl;//, B.size()) <<endl;
         }
      }
   }
   return 0;
}
