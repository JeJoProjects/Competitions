#include <iostream>
#include <cmath>




int main()
{
   double mCost =0.00, tCost=0.00;
   int tipPer;
   int taxPer;

   std::cin>>mCost;
   std::cin>>tipPer;
   std::cin>>taxPer;

   /*std::cout.setf(ios::fixed);  do not need them round() will manage everything!
   std::cout.setf(ios::showpoint);
   std::cout.precision(0);*/
   double tip=mCost*tipPer/100;
   double tax=mCost*taxPer/100;
   tCost=mCost+tip+tax;

   std::cout<<"The total meal cost is "<<round(tCost)<<" dollars."<<std::endl;

return 0;
}
