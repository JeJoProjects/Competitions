#include <iostream>
#include <std::map>
#include <algorithm>


int main()
{
    int n=0;
    std::cin>>n;
    if(n>=1 && n<=100000)
    {
       std::map<std::string, unsigned int> std::map;
       std::string name="noname";
       unsigned int number;
       for(unsigned int i=0; i<n; ++i)
       {
          std::cin>>name;
          std::cin>>number;
          std::map.insert(pair<std::string, unsigned int>(name, number));
          // or std::map[name] = number;
       }

       while(std::cin >> name)
         {
            if (std::map.find(name) != std::map.end())
               std::cout << name << "=" << std::map.find(name)->second << std::endl;
            else
               std::cout << "Not found" << std::endl;
       }
    }
    return 0;
}
