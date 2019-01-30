#include <iostream>



int main() {
    int ali[3], bob[3],a=0,b=0;
    for (int i=0; i<3; ++i)
      std::cin>>ali[i];
    for (int i=0; i<3; ++i)
      std::cin>>bob[i];
    for(int i=0; i<3; i++)
      {
        if (ali[i]>bob[i]) {a=a+1;}
        else if (ali[i]<bob[i]) {b=b+1;}
        else {a=a+0; b=b+0;}
      }
    std::cout<<a<<"\t"<<b<<std::endl;
    return 0;
}
