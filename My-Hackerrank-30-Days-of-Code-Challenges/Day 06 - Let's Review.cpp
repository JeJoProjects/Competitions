#include <iostream>
#include <std::string>
#include<std::vector>


int main()
{
   int T=0, Len=0;
   std::string TEMP,temp;
   std::vector<char> sVec1, sVec2;
   std::vector<std::string> All;
   std::cin>>T;
   if(T>=1 && T<=10)
   {
      for(int i=0; i<T; ++i)
      {
         std::cin>>TEMP;
         All.push_back(TEMP);

      }
      for(std::vector<std::string>::iterator itr=All.begin();
                                    itr!=All.end(); ++itr)
      {
         temp=*itr;
         Len=temp.length();
         if(Len>=2 && Len<=10000)
         {
            for(int j=0; j<Len; ++j) // separation of char
               {
                  if(j%2==0)
                     sVec1.push_back(temp.at(j));
                  else
                     sVec2.push_back(temp.at(j));
               }
            for(std::vector<char>::iterator jj=sVec1.begin();
                                        jj!=sVec1.end(); ++jj)
               std::cout<<*jj;
            std::cout<<" ";
            for(std::vector<char>::iterator jj=sVec2.begin();
                                        jj!=sVec2.end(); ++jj)
               std::cout<<*jj;
            std::cout<<std::endl;
            sVec1.clear();
            sVec2.clear();
         }
      }
   }
    return 0;
}
