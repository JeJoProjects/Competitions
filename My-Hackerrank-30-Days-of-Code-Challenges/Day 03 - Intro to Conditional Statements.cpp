#include <iostream>



int main(){
    int N;
    std::cin >> N;
    if(N>=1 && N<=100)
      {
         if      (N%2==0 && N>=2 && N<=5) std::cout<<"Not Weird"<<std::endl;
         else if (N%2==0 && N>=6 && N<=20) std::cout<<"Weird"<<std::endl;
         else if (N%2==0 && N>20) std::cout<<"Not Weird"<<std::endl;
         else if (N%2==1)         std::cout<<"Weird"<<std::endl;
      }

    return 0;
}
