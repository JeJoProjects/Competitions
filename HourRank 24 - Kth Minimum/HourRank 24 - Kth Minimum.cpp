#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// problem should be solved with a complexity of O(nlog^2(n)log(a))
vector<long int> generate_list(vector<long int> A, vector<long int> B, long int x)
{
   vector<long int> L;
   unsigned long int n=A.size(), m=B.size();
   for(unsigned long int i=0; i<min(n, m-x); ++i)
      for(unsigned long int j=(i+x); j<m; ++j)
         L.push_back(A[i]*B[j]);

   return L;
}
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   unsigned long int n, m;   //length of A & B.
   long int x;               // an integer  x.
   unsigned int k;               // element position to be searched
   cin >> n >> m >> x >> k;
   if( (2<=n && n<=200000) && (2<=m && m<=200000) && (1<=x && x<m) )
   {
      vector<long int> A(n), B(m);

      for(auto itr=A.begin(); itr!=A.end(); ++itr)
         cin>>*itr;

      for(auto itr=B.begin(); itr!=B.end(); ++itr)
         cin>>*itr;

      vector<long int> list_C=generate_list(A, B, x);
      //copy(list_C.begin(), list_C.end(), ostream_iterator<int>(cout," "));
      sort(list_C.begin(), list_C.end());
      cout<<list_C[k-1]<<endl;

   }
   return 0;
}
