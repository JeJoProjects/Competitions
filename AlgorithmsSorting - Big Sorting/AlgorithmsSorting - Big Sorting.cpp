#include <bits/stdc++.h>


bool Comp(std::string now, std::string next)
{
   int a=now.length();
   int b=next.length();
   if(a==b) return now<next;
   return a<b;
}

int main()
{
    int n=0, Len=0;
    std::string temp;
    std::cin >> n;
    std::vector<std::string> Vec(n);
    for(int i = 0; i < n; i++)
       std::cin >> Vec[i];
   sort(Vec.begin(), Vec.end(), Comp);
    /*Len=Vec.size();
    for(int Times=0; Times<Len-1; ++Times)
       for(int i = 0; i <=Len-1-Times; i++)
          if(Vec[i]>Vec[i+1])
          {
               std::string temp=Vec[i];
               Vec[i]=Vec[i+1];
               Vec[i+1]=temp;
               std::cout<<Vec[i]<<"  "<<Vec[i+1]<<std::endl;
          }*/
   for(std::vector<std::string>::iterator itr=Vec.begin();
                                 itr!=Vec.end(); ++itr)
        std::cout<<*itr<<std::endl;
    return 0;
}
