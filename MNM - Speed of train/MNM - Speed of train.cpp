#include <bits/stdc++.h>


int main()
{
    ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int T; std::cin>>T;
    for(int t=0; t<T; ++t)
    {
        float N; std::cin>>N;
        float K; std::cin>>K;

        if(N>=1)
        {
            float time = 60.0;
            float Ans =( ((N-1.0)*K*18.0) / (5.0*time) );
            std::cout<<Ans<<std::endl;
        }
        else
            std::cout<<"0"<<std::endl;

   }
   return 0;
}
