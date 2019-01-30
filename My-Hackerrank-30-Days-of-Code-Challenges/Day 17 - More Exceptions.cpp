#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>


class  Calculator
{

   int n=0,p=0;
public:
   Calculator()
   {
      this->n=n;
      this->p=p;
   }
   int power(int n, int p)
   {
      if(n<0 || p<0)
      {
         throw runtime_error("n and p should be non-negative");
      }
      return pow(n,p);
   }
};

// or we can make  construct our own exception handler
// if we wanna be specific, like below:
class  Calculator
{
   int n=0,p=0;

private: class e: // defining exceptions
   public exception
   {
      virtual const char* what() const throw()
      {
         return "n and p should be non-negative";
      }
   }exp;

public:
   Calculator()
   {
      this->n=n;
      this->p=p;
   }
   int power(int n, int p)
   {
      if(n<0 || p<0)
      {
         throw exp;  // defined exception case in class e
      }
      return pow(n,p);
   }
};


Just declare a new one inside Calculator.
int main()
{
    Calculator myCalculator=Calculator();
    int T,n,p;
    std::cin>>T;
    while(T-->0){
      if(std::cin>>n>>p)
         {
         try{
               int ans=myCalculator.power(n,p);
               std::cout<<ans<<std::endl;
         }
         catch(exception& e){
             std::cout<<e.what()<<std::endl;
         }
      }
    }
}
