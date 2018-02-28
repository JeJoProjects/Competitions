#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin>>T;
    for(int t=0; t<T; ++t)
    {
        string W,S;
        cin>>W>>S;

        string tW = W;
        string tS = S;

        transform(W.begin(), W.end(), W.begin(), ::tolower);
        transform(S.begin(), S.end(), S.begin(), ::tolower);

        map<char,int> mapW;
        for(unsigned int i=0; i<W.size(); ++i)
            mapW[W[i]]++;

        //for(const auto it:mapW)cout<<it.first<< " "<<it.second<<endl;
        multiset<string> Answer;
        int count = 0;
        for(unsigned int i=0; i<=(S.size()-W.size()); ++i)
        {
            string subS = S.substr(i,W.size());

            string AnsS = tS.substr(i,W.size());
            map<char,int> temp;

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
           cout<<count<<endl;
           for(const auto it:Answer) cout<<it<<endl;
        }
        else
            cout<<count<<endl;
    }
   return 0;
}
