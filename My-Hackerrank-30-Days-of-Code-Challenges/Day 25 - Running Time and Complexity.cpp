#include <cmath>
#include <iostream>

//A prime number testing
int main()
{
   unsigned int n=1, T=1;
   std::cin>>T;                 // the number of test cases.
   if(T>=1 && T<=30)       //Constraints
   {
      for(unsigned int qury=0; qury<T; ++qury)
      {
         bool AnsTest=true; // to check the number prime or not.(default=Prime)
         std::cin>>n;            // the number to be tested

         if(n>=1 && n<=2000000000)           //Constraints
         {
            if(n==1)        // 1 is not a prime
               AnsTest=false;
            else
               for(unsigned int i=2; i<=sqrt(n); ++i)
                  if(n%i==0)// if it happens the number is not a prime.
                  {
                     AnsTest=false;
                     break;
                  }

            if(AnsTest) // Prime: no changes during loop!
               std::cout<<"Prime"<<std::endl;
            else
               std::cout<<"Not prime"<<std::endl;
         }
      }
   }
   return 0;
}


/*#include <cmath>
#include <iostream>

//A prime number testing
bool checkPrime( int in_numb )
{
    if( in_numb == 0 || in_numb == 1 )
        return false;
    //  If a number is divisable by another number less or equal to the square root of the first number... it is NOT prime.
    int sq = sqrt( in_numb );
    for (int i = 2; i <= sq; i++)
    {
        if (in_numb % i == 0) //if divisible
            return false;
    }
    return true;
}

int main()
{
    int howMany;
    std::cin >> howMany;
    for( int i = 0; i < howMany; i++ )
    {
        int numb;
        std::cin >> numb;
        bool b =checkPrime( numb );
        if( b )
            std::cout << "Prime" << std::endl;
        else
            std::cout << "Not prime" << std::endl;
    }
    return 0;
}
*/
