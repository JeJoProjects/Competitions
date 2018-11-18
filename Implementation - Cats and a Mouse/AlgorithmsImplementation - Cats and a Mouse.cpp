#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   int q=0, x[100], y[100], z[100];
    cin>> q;
    if(q>=1 && q<=100)
    {
       for(int i=0; i<q; ++i)
       {
          cin>>x[i];
          cin>>y[i];
          cin>>z[i];
       }

       for(int i=0; i<q; ++i)
       {
          if ( abs(z[i]-x[i]) < abs(z[i]-y[i]) )
               cout<<"Cat A"<<endl;
          else if (abs(z[i]-x[i]) == abs(z[i]-y[i]))
               cout<<"Mouse C"<<endl;
          else
               cout<<"Cat B"<<endl;
       }

    }
    return 0;
}
