#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;
#define ul unsigned long int

/*int main()
{
    ul N=0, T=0;
    cin>>T;

    for(auto t=0; t<T; ++t)
    {
       cin>>N;
       vector<ul> vec(N),a;

       ul sum=0, idx=0;
       for(auto itr=vec.begin(); itr!=vec.end(); ++itr)
       {
          cin>>*itr;
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
         //cout<<it<<" ";

      for(auto itr=a.begin()+1; itr!=a.end(); ++itr)
      {
         long int diff = *itr-*(itr-1);
         sum+= abs(diff);
      }

    cout<<sum<<endl;
    }
    return 0;
}
*/
// editorial
#include<bits/stdc++.h>
using namespace std;
int ar[100005]={},dp[100005][2]={};
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,i,j;
        cin >> n;
        for(i=0; i<n; i++)
            cin >> ar[i];
        for(i=0; i<n-1; i++)
        {
            dp[i+1][0]=max(dp[i][0],dp[i][1]+abs(ar[i]-1));
            cout<<"DP 0 "<<max(dp[i][0],dp[i][1]+abs(ar[i]-1))<<" ";
            dp[i+1][1]=max(dp[i][0]+abs(ar[i+1]-1),dp[i][1]+abs(ar[i]-ar[i+1]));
            cout<<"DP 1 "<<max(dp[i][0]+abs(ar[i+1]-1),dp[i][1]+abs(ar[i]-ar[i+1]))<<endl;
        }
        cout << max(dp[n-1][0],dp[n-1][1]) << endl;
    }
    return 0;
}
