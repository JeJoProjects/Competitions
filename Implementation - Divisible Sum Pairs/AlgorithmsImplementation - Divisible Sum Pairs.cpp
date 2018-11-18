#include <iostream>
using namespace std;

int main()
{
    int n=0, k=0, a[100], j=0, Count=0;
    cin>>n;
    cin>>k;
    if (n>=2 && n<=100 && k>=1 && k<=100)
    {
      for(int i=0; i<n; ++i)
         cin>>a[i];
      for(int i=0; i<n-1; ++i)
         for(int j=i+1; j<n; ++j)
            if (i<j && (a[i]+a[j])%k==0)
               Count++;
               //cout<<a[i]<<" "<<a[j]<<endl;
    cout<<Count<<endl;
    }
    return 0;
}
