#include <bits/stdc++.h>


typedef unsigned long long int   uint64;
typedef long long int            int64;

int main()
{
    ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    uint64 T=0; std::cin>>T;
    for(uint64 t=0; t<T; ++t )
    {
        uint64 n,m; std::cin>>n>>m;

        std::vector<int> vec;                      vec.reserve(n*m);
        copy_n(istream_iterator<int>(std::cin), n*m, back_inserter(vec));

        sort(vec.begin(),vec.end());
        reverse(vec.begin(),vec.end());

        uint64 Cyborg  = 0;
        uint64 Geno =0;
        for(uint64 i =0; i< (n*m); ++i)
        {
            if(i & 1) Geno+= vec[i];
            else       Cyborg+= vec[i];
        }
        if(Cyborg > Geno)       std::cout<<"Cyborg"<<std::endl;
        else if(Cyborg < Geno)  std::cout<<"Geno"<<std::endl;
        else                    std::cout<<"Draw"<<std::endl;
   }
   return 0;
}
