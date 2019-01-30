#include <bits/stdc++.h>
#include <cctype>


int main()
{
    ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int T; std::cin>>T;
    for(int t=0; t<T; ++t)
    {
        std::string W,S;
        std::cin>>W>>S;

        std::string tW = W;
        std::string tS = S;

        transform(W.begin(), W.end(), W.begin(), ::tolower);
        transform(S.begin(), S.end(), S.begin(), ::tolower);

        std::map<char,int> mapW;
        for(unsigned int i=0; i<W.size(); ++i)
            mapW[W[i]]++;

        //for(const auto it:mapW)std::cout<<it.first<< " "<<it.second<<std::endl;
        std::multiset<std::string> Answer;
        int count = 0;
        for(unsigned int i=0; i<=(S.size()-W.size()); ++i)
        {
            std::string subS = S.substr(i,W.size());

            std::string AnsS = tS.substr(i,W.size());
            std::map<char,int> temp;

            for(unsigned int j=0; j<subS.size(); ++j)
                temp[subS[j]]++;

            if(temp==mapW)
            {
               Answer.emplace(AnsS) ;
               ++count;
            }
        }

        if(count !=0 )
        {
           std::cout<<count<<std::endl;
           for(const auto it:Answer) std::cout<<it<<std::endl;
        }
        else
            std::cout<<count<<std::endl;
    }
   return 0;
}
