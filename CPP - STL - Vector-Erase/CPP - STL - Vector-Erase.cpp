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
            vec.push_back(temp);
        }
        unsigned int x=1, lower=0, upper=0;
        cin>>x;
        cin>> lower>> upper;
        if(x>=1 && x<=N)
        {
            vec.erase( vec.begin()+(x-1) );
            vec.erase( vec.begin()+(lower-1), vec.begin()+(upper-1) );
            cout << vec.size() << endl;
            for(vector<unsigned int>::iterator itr=vec.begin();
                                            itr!=vec.end(); ++itr)
                cout<<*itr<<" ";
        }
    }
    return 0;
}
