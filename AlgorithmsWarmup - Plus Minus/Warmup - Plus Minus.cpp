#include <iostream>
#include <std::vector>
#include <iomanip>



int main()
{
    std::vector<double> vec;
    double temp=0.0, posi=0.0,nega=0.0, Z=0.0;
    int N;
    std::cin>>N;
    for(int i=0; i<N; ++i)
    {
       std::cin>>temp;
       vec.push_back(temp);
    }
    std::cout.setf(ios::fixed);
    std::cout.setf(ios::showpoint);
    std::cout.precision(6);
    for(std::vector<double>::iterator itr=vec.begin(); itr!=vec.end(); ++itr)
    {
       if(*itr>0)
          posi++;
       else if (*itr<0)
          nega++;
       else
          Z++;
    }
    std::cout<<posi/vec.size()<<std::endl <<nega/vec.size()<<std::endl
        <<Z/vec.size()<<std::endl;
    return 0;
}
