#include <iostream>
#include <algorithm>


int main()
{
   std::string S;
   std::cin>>S;
   unsigned short Len=S.length(), Ans=0;
   if(Len>=1 && (Len<=99 && Len%3==0))
   {
      for(unsigned short i=0; i<Len; i=i+3)
      {
         if(S.at(i)!='S')
            ++Ans;
         if(S.at(i+1)!='O')
            ++Ans;
         if(S.at(i+2)!='S')
            ++Ans;
         //std::cout<< "loop worked now"<<std::endl;
      }
   }
   std::cout<<Ans<<std::endl;
    return 0;
}
// or
/*
int main(){
    std::string s;
   char te[3];
    te[0]='S';
    te[1]='O';
    te[2]='S';
    std::cin >> s;int i=0,j=0,count=0;;
    while(s[i])
        {   if(j==3)j=0;
            if((s[i])!= (te[j]))count++;
            i++;j++;
        }
    std::cout<<count;
    return 0;
}
*/
