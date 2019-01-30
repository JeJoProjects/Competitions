#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    vector<double> vec;
    double temp=0.0, posi=0.0,nega=0.0, Z=0.0;
    int N;
    cin>>N;
    for(int i=0; i<N; ++i)
    {
       cin>>temp;
       vec.push_back(temp);
    }
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(6);
    for(vector<double>::iterator itr=vec.begin(); itr!=vec.end(); ++itr)
    {
       if(*itr>0)
          posi++;
       else if (*itr<0)
          nega++;
       else
          Z++;
    }
    cout<<posi/vec.size()<<endl <<nega/vec.size()<<endl
        <<Z/vec.size()<<endl;
    return 0;
}
