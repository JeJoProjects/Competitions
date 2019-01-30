#include <iostream>
#include <std::vector>
#include <algorithm>

// problem should be solved with a complexity of O(nlog^2(n)log(a))
std::vector<long int> generate_list(std::vector<long int> A, std::vector<long int> B, long int x)
{
   std::vector<long int> L;
   unsigned long int n=A.size(), m=B.size();
   for(unsigned long int i=0; i<min(n, m-x); ++i)
      for(unsigned long int j=(i+x); j<m; ++j)
         L.push_back(A[i]*B[j]);

   return L;
}
int main()
{
   ios_base::sync_with_stdio(false);
   std::cin.tie(nullptr);
   unsigned long int n, m;   //length of A & B.
   long int x;               // an integer  x.
   unsigned int k;               // element position to be searched
   std::cin >> n >> m >> x >> k;
   if( (2<=n && n<=200000) && (2<=m && m<=200000) && (1<=x && x<m) )
   {
      std::vector<long int> A(n), B(m);

      for(auto itr=A.begin(); itr!=A.end(); ++itr)
         std::cin>>*itr;

      for(auto itr=B.begin(); itr!=B.end(); ++itr)
         std::cin>>*itr;

      std::vector<long int> list_C=generate_list(A, B, x);
      //copy(list_C.begin(), list_C.end(), ostream_iterator<int>(std::cout," "));
      sort(list_C.begin(), list_C.end());
      std::cout<<list_C[k-1]<<std::endl;

   }
   return 0;
}
