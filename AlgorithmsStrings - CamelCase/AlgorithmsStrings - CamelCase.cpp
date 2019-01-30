#include <iostream>



int main(){
    std::string s;
    int Count=1;
    getline(std::cin, s);
    for(unsigned int i=0; i<s.length(); ++i)
      if(s[i]>='A' && s[i]<='Z') // or if(s.at(i)>='A' && s.at(i)<='Z')
         Count++;
   std::cout<<Count<<std::endl;
    return 0;
}
