#include <iostream>


std::string hackerrankInString(std::string s)
{
   unsigned int index=0;
   std::string hack="hackerrank";

   if(hack.length() > s.length())
      return "NO";
   else
   {
      for(unsigned int i=0; i< s.length(); ++i)
         if(index < hack.length() && hack.at(index)==s.at(i))
            ++index;
      if(hack.length() == index)
         return "YES";
      else
         return "NO";
   }
}
//**************************************************
int main()
{
   unsigned int q; //the number of queries
   std::cin >> q;
   if(q>=2 && q<=100)
   {
      for(int a0 = 0; a0 < q; a0++)
      {
         std::string s; //std::string s to be evaluated.
         std::cin >> s;
         std::string result = hackerrankInString(s);
         std::cout << result << std::endl;
      }
   }
   return 0;
}
