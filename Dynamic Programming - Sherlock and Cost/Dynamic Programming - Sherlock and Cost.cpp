#include <cmath>
#include <cstdio>
#include <std::vector>
#include <iostream>
#include <algorithm>
#include <iterator>

#define ul unsigned long int

/*int main()
{
    ul N=0, T=0;
    std::cin>>T;

    for(auto t=0; t<T; ++t)
    {
       std::cin>>N;
       std::vector<ul> vec(N),a;

       ul sum=0, idx=0;
       for(auto itr=vec.begin(); itr!=vec.end(); ++itr)
       {
          std::cin>>*itr;
          if(itr!=vec.begin() && itr<vec.begin()+2)
          {
             if( *itr > * (itr-1)  || *itr== *(itr-1) )
             {
                a.push_back(1);
                a.push_back(*itr);
             }
             else
             {
                a.push_back(*(itr-1));
                a.push_back(1);
             }
          }
          else if(itr!=vec.begin() && itr>=vec.begin()+2)
          {
             long int diff_A = a[idx-1]-1;
             long int diff_B = *itr-a[idx-1];
             if(abs(diff_A) > abs(diff_B) )
              a.push_back(1);
             else
               a.push_back(*itr);
          }
          ++idx;
       }
       //for(auto &it: a)
         //std::cout<<it<<" ";

      for(auto itr=a.begin()+1; itr!=a.end(); ++itr)
      {
         long int diff = *itr-*(itr-1);
         sum+= abs(diff);
      }

    std::cout<<sum<<std::endl;
    }
    return 0;
}
*/
// editorial
#include<bits/stdc++.h>

int ar[100005]={},dp[100005][2]={};
int main()
{
    int t;
    std::cin >> t;
    while(t--)
    {
        int n,i,j;
        std::cin >> n;
        for(i=0; i<n; i++)
            std::cin >> ar[i];
        for(i=0; i<n-1; i++)
        {
            dp[i+1][0]=max(dp[i][0],dp[i][1]+abs(ar[i]-1));
            std::cout<<"DP 0 "<<max(dp[i][0],dp[i][1]+abs(ar[i]-1))<<" ";
            dp[i+1][1]=max(dp[i][0]+abs(ar[i+1]-1),dp[i][1]+abs(ar[i]-ar[i+1]));
            std::cout<<"DP 1 "<<max(dp[i][0]+abs(ar[i+1]-1),dp[i][1]+abs(ar[i]-ar[i+1]))<<std::endl;
        }
        std::cout << max(dp[n-1][0],dp[n-1][1]) << std::endl;
    }
    return 0;
}
