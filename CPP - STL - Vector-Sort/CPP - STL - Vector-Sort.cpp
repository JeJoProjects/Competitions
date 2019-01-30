#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    unsigned int N=1;
    cin>>N;
    if(N>=1 && N<=100000)
    {
        vector<unsigned int> vec;
        for(unsigned int i=0; i<N; ++i)
        {
            unsigned int temp=1;
            cin>>temp;
            if(temp>=1 && temp<=1000000000)
                vec.push_back(temp);
        }
    sort(vec.begin(), vec.end());
    for(vector<unsigned int>::iterator itr=vec.begin();
                                       itr!=vec.end(); ++itr)
        cout<<*itr<<" ";
    }
    return 0;
}
