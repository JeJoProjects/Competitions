#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

#define ll long long

using namespace std;

int main(){
    int t;
    cin>>t;
    for (;t>0;t--){
        int n,q;
        cin>>n>>q;
        vector <int> x;
        vector <int> y;
        vector <int> z;
        vector <int> w;
        for (;q>0;q--){
            char c;
            cin>>c;
            int x1,y1,z1,w1;
            int x2,y2,z2;
            if (c=='U'){
                for (int i=0;i<5;i++)
                    cin>>c;
                cin>>x1>>y1>>z1>>w1;
                bool flag=true;
                for (int i=0;i<w.size();i++){
                    if (x[i]==x1&&y1==y[i]&&z[i]==z1){
                        w[i]=w1;
                        flag=false;
                    }
                }
                if (flag){
                    x.push_back(x1);
                    y.push_back(y1);
                    z.push_back(z1);
                    w.push_back(w1);
                }
            }else{
                for (int i=0;i<4;i++)
                    cin>>c;
                cin>>x1>>y1>>z1;
                cin>>x2>>y2>>z2;
                ll ans=0;
                for (int i=0;i<w.size();i++){
                    if (x[i]<=x2&&x[i]>=x1&&y[i]<=y2&&y[i]>=y1&&z[i]<=z2&&z[i]>=z1){
                        ans+=(ll)(w[i]);
                    }
                }
                cout<<ans<<endl;
            }
        }
    }
}
/*#include<bits/stdc++.h>
using namespace std;
class cord
{
    public:
    int x;
    int y;
    int z;
    int val;
};
int main()
{
    int t;
    cin>>t;
    cord A[10000];
    while(t--)
    {   long long n,m,sum=0,i=0,q,w,e,r,l,u,flag=0,v,nb,b,value;
    string s;
        cin>>n>>m;
        while(m--)
        {   sum=0,flag=0;
            cin>>s;
            if(s=="UPDATE")
            {  cin>>v>>b>>nb>>value;
            if(i!=0){
                    for(int k=0;k<i;k++)
                    {
                        if(v==A[k].x&&b==A[k].y&&nb==A[k].z){
                            A[k].val=value;
                            flag=1;
                           break;}
                    }}
            if(flag!=1){
                A[i].x=v;
                A[i].y=b;
                A[i].z=nb;
                A[i].val=value;
                }

            if(flag==0)
                i++;
            }
            if(s=="QUERY")
            {cin>>q>>w>>e>>r>>l>>u;

                for(int j=0;j<i;j++)
                {
                    if(q<=A[j].x&&r>=A[j].x&&w<=A[j].y&&l>=A[j].y&&e<=A[j].z&&u>=A[j].z)
                    sum+=A[j].val;
                }
                cout<<sum<<endl;
            }
        }
        cout<<endl;
    }
}*/
