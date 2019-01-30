#include <iostream>
#include <cmath>


using namespace std;

int main()
{
   double mCost =0.00, tCost=0.00;
   int tipPer;
   int taxPer;

   cin>>mCost;
   cin>>tipPer;
   cin>>taxPer;

   /*cout.setf(ios::fixed);  do not need them round() will manage everything!
   cout.setf(ios::showpoint);
   cout.precision(0);*/
   double tip=mCost*tipPer/100;
   double tax=mCost*taxPer/100;
   tCost=mCost+tip+tax;

   cout<<"The total meal cost is "<<round(tCost)<<" dollars."<<endl;

return 0;
}
