#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <std::vector>
#include <std::string>

#define ll long long



int main()
{
    int t;
    std::cin>>t;
    for (;t>0;t--){
        int n,q;
        std::cin>>n>>q;
        std::vector <int> x;
        std::vector <int> y;
        std::vector <int> z;
        std::vector <int> w;
        for (;q>0;q--){
            char c;
            std::cin>>c;
            int x1,y1,z1,w1;
            int x2,y2,z2;
            if (c=='U'){
                for (int i=0;i<5;i++)
                    std::cin>>c;
                std::cin>>x1>>y1>>z1>>w1;
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
                    std::cin>>c;
                std::cin>>x1>>y1>>z1;
                std::cin>>x2>>y2>>z2;
                ll ans=0;
                for (int i=0;i<w.size();i++){
                    if (x[i]<=x2&&x[i]>=x1&&y[i]<=y2&&y[i]>=y1&&z[i]<=z2&&z[i]>=z1){
                        ans+=(ll)(w[i]);
                    }
                }
                std::cout<<ans<<std::endl;
            }
        }
    }
}
/*#include<bits/stdc++.h>

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
    std::cin>>t;
    cord A[10000];
    while(t--)
    {   long long n,m,sum=0,i=0,q,w,e,r,l,u,flag=0,v,nb,b,value;
    std::string s;
        std::cin>>n>>m;
        while(m--)
        {   sum=0,flag=0;
            std::cin>>s;
            if(s=="UPDATE")
            {  std::cin>>v>>b>>nb>>value;
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
            {std::cin>>q>>w>>e>>r>>l>>u;

                for(int j=0;j<i;j++)
                {
                    if(q<=A[j].x&&r>=A[j].x&&w<=A[j].y&&l>=A[j].y&&e<=A[j].z&&u>=A[j].z)
                    sum+=A[j].val;
                }
                std::cout<<sum<<std::endl;
            }
        }
        std::cout<<std::endl;
    }
}*/
