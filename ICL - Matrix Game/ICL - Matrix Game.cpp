#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int   uint64;
typedef long long int            int64;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    uint64 T=0; cin>>T;
    for(uint64 t=0; t<T; ++t )
    {
        uint64 n,m; cin>>n>>m;

        vector<int> vec;                      vec.reserve(n*m);
        copy_n(istream_iterator<int>(cin), n*m, back_inserter(vec));

        sort(vec.begin(),vec.end());
        reverse(vec.begin(),vec.end());

        uint64 Cyborg  = 0;
        uint64 Geno =0;
        for(uint64 i =0; i< (n*m); ++i)
        {
            if(i & 1) Geno+= vec[i];
            else       Cyborg+= vec[i];
        }
        if(Cyborg > Geno)       cout<<"Cyborg"<<endl;
        else if(Cyborg < Geno)  cout<<"Geno"<<endl;
        else                    cout<<"Draw"<<endl;
   }
   return 0;
}
