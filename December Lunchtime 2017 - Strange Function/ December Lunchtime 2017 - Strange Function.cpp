#include <iostream>
using namespace std;

unsigned int special_Function(unsigned long long int AN)
{
   if (AN< 10)
      return AN;
   else
   {
      unsigned long long int temp=0,sum=0;
      while(AN>0)
      {
         temp=AN%10;
         sum+=temp;
         AN=AN/10;
      }
      special_Function(sum);
   }
}

int main()
{
   unsigned int T;
   cin>> T;  // the number of test cases.
   if(T>=1 && T<=100000)
   {
      for(auto i=0; i<T; ++i)
      {
         unsigned long long int A=0, N=0, P=1;
         cin>>A >>N;
         if(A>=90) // at this stage just the same number could be passed to the function
            P=A;
         if(A<90)
            for(auto i=1; i<=N; ++i)
               P*=A;
         unsigned int  Ans=special_Function(P);
         cout<<Ans<<endl;
      }
   }
   return 0;
}
