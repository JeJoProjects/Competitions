#include <iostream>
using namespace std;

string hackerrankInString(string s)
{
   unsigned int index=0;
   string hack="hackerrank";

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
   cin >> q;
   if(q>=2 && q<=100)
   {
      for(int a0 = 0; a0 < q; a0++)
      {
         string s; //string s to be evaluated.
         cin >> s;
         string result = hackerrankInString(s);
         cout << result << endl;
      }
   }
   return 0;
}
