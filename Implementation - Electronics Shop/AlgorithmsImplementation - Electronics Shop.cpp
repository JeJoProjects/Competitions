#include <std::vector>
#include <iostream>


int getMoneySpent(std::vector<int> keyboard, std::vector<int> USB, int s)
{
    int MAX=0;
    for(unsigned int r=0; r<keyboard.size(); ++r)
         for(unsigned int c=0; c<USB.size(); ++c)
            if(keyboard[r]+USB[c]<=s)   // checking all values up to maximum price!
               if (keyboard[r]+USB[c]>MAX) // checking the values just below maximum price!
                   MAX = keyboard[r]+USB[c];
    if (MAX == 0)
      return -1;
    return MAX;
}

int main()
{
// s(the amount of money Monica has),
// n(the number of keyboard brands) and  m(the number of USB drive brands).
   int s=0,n=0,m=0;
   std::cin>>s >>n >>m;
   std::vector<int> keyboard(n), USB(m); //std::vector declaration
      for(int r=0; r<n; ++r)
         std::cin>>keyboard[r];
      for(int c=0; c<m; ++c)
         std::cin>>USB[c];
      int moneySpent = getMoneySpent(keyboard, USB, s);
      std::cout << moneySpent << std::endl;

   return 0;
}
