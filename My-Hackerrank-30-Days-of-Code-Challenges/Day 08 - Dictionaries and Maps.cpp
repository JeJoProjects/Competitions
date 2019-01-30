#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    int n=0;
    cin>>n;
    if(n>=1 && n<=100000)
    {
       map<string, unsigned int> MAP;
       string name="noname";
       unsigned int number;
       for(unsigned int i=0; i<n; ++i)
       {
          cin>>name;
          cin>>number;
          MAP.insert(pair<string, unsigned int>(name, number));
          // or MAP[name] = number;
       }

       while(cin >> name)
         {
            if (MAP.find(name) != MAP.end())
               cout << name << "=" << MAP.find(name)->second << endl;
            else
               cout << "Not found" << endl;
       }
    }
    return 0;
}
