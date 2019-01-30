#include <iostream>
#include <cmath>



int main()
{
   int q=0, x[100], y[100], z[100];
    std::cin>> q;
    if(q>=1 && q<=100)
    {
       for(int i=0; i<q; ++i)
       {
          std::cin>>x[i];
          std::cin>>y[i];
          std::cin>>z[i];
       }

       for(int i=0; i<q; ++i)
       {
          if ( abs(z[i]-x[i]) < abs(z[i]-y[i]) )
               std::cout<<"Cat A"<<std::endl;
          else if (abs(z[i]-x[i]) == abs(z[i]-y[i]))
               std::cout<<"Mouse C"<<std::endl;
          else
               std::cout<<"Cat B"<<std::endl;
       }

    }
    return 0;
}
