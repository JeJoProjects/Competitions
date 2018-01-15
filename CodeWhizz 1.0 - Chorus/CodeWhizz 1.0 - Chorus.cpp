/*#include <bits/stdc++.h>
using namespace std;
#define y1 cgbngfgn
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fir first
#define m_p make_pair
#define sec second
#define files(name) freopen(name".in","r",stdin); freopen (name".out","w",stdout);
#define time pdojegoritg
#define left eorgjrptgj
#define right rtyjtokh
typedef long long ll;
typedef long double ld;
const int arr=5e5+100;
const int md=1e9+7;
const int base=1e9+7;


int n,m;
int use[500];
ld x[100],y[100],xx[100],yy[100];

ld dist(ld x1, ld y1, ld x2, ld y2)
{
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

void dfs(int u, ld mn, int c)
{
    use[u]=c;
    for (int i=1;i<=m;i++)
        if (!use[i] && dist(xx[i],yy[i],xx[u],yy[u])<=mn)
        dfs(i,mn,c);
}

ld mn[100];

bool check(ld u)
{
    for (int i=1;i<=m;i++)
        use[i]=0;
    int cnt=0;
    for (int i=1;i<=m;i++)
        if (!use[i])
        {
            dfs(i,u,++cnt);
        }


    for (int i=1;i<=cnt;i++)
        mn[i]=0;
    for (int i=1;i<=n;i++)
    {
        ld nowmn[100];
        for (int i=1;i<=cnt;i++)
            nowmn[i]=1e9;
        for (int j=1;j<=m;j++)
            nowmn[use[j]]=min(nowmn[use[j]],dist(x[i],y[i],xx[j],yy[j]));


        for (int i=1;i<=cnt;i++)
            mn[i]=max(mn[i],nowmn[i]);
    }

    for (int i=1;i<=cnt;i++)
        if (mn[i]>u)
        return(0);

    return(1);
}

void solve()
{
    cin>>n>>m;
    for (int i=1;i<=n;i++)
        cin>>x[i]>>y[i];

    for (int i=1;i<=m;i++)
        cin>>xx[i]>>yy[i];
    ld l=0;
    ld r=1e9;
    int cnt=500;
    while (cnt--)
    {
        ld d=(l+r)/2.0;
        if (check(d))
            r=d; else l=d;
    }

    cout<<fixed<<setprecision(6)<<l<<'\n';
}

signed main()
{
    int t;
    cin>>t;
    while (t--)
        solve();
}*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cmath>
#include <iomanip>
#include <limits>
using namespace std;

double dis(int a, int b, int c, int d)
{
   return sqrt( ((a-c) * (a-c)) + ((b-d) * (b-d)) )*1.0;
}

int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   unsigned int T=0; cin>>T;

   for(auto t=0; t<T;++t)
   {
      int S, N; // S the number of singers and N the number of the song lovers.

      cin>>S >>N;
      vector<int> Svec, Nvec;
      Svec.reserve(S*2);
      Nvec.reserve(N*2);

      copy_n(istream_iterator<int>(cin), S*2, back_inserter(Svec));
      copy_n(istream_iterator<int>(cin), N*2, back_inserter(Nvec));

      double Ans=0;
      for(auto i=0; i<(S*2); i=i+2)
         for(auto j=0; j<(N*2); j=j+2)
         {
            cout<<Svec[i]<<" "<<Svec[i+1]<<" "<<Nvec[j]<<" "<<Nvec[j+1]<<endl;
            if (Ans<dis(Svec[i], Svec[i+1], Nvec[j], Nvec[j+1]))
               Ans=dis(Svec[i], Svec[i+1], Nvec[j], Nvec[j+1]);
            //cout<<"A"<<Ans<<endl;
         }
      cout << fixed << showpoint<<setprecision(6)<<Ans << endl;
   }
   return 0;
}

