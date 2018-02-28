#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin>>T;
    for(int t=0; t<T; ++t)
    {
        float N; cin>>N;
        float K; cin>>K;

        if(N>=1)
        {
            float time = 60.0;
            float Ans =( ((N-1.0)*K*18.0) / (5.0*time) );
            cout<<Ans<<endl;
        }
        else
            cout<<"0"<<endl;

   }
   return 0;
}
