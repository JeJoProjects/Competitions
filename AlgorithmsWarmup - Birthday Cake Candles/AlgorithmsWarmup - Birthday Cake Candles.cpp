#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
   long int n=0, temp=0, Count=0, t=0;
   vector<long int> vec;
    cin>>n;
    if (n>=1 && n<=100000)
    {
       for(int i=0; i<n; ++i)
       {
          cin>>temp;
          vec.push_back(temp);
       }
       sort(vec.begin(), vec.end());
       t=vec[n-1]; // last we have bigger value!
       for(vector<long int>::iterator itr=vec.end()-1; itr!=vec.begin()-1; --itr)
         if (*itr==t)
            Count++;
       /*for(int i=vec.size(); i>0; --i)
       cout<<vec[i-1]<<" ";*/
       cout<<Count;
    }
    return 0;
}
