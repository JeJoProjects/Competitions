#include <iostream>
#include <set>
#include <vector>
#define MOD 1000000000
using namespace std;

typedef long long ll;
ll f[45];
int n,m,niz[100005];//n: number of elements, m: number of operations

set<int> s;// when we insert, it will be BT sorted way storing everything
           // no duplicates
int main()
{
    ios_base::sync_with_stdio(0);
    f[1]=1;
    for(int i=2;i<40;i++) // calculating fact of first 39 integers
    {
        f[i]=(f[i-1]*i);
        f[i]%=MOD;
    }
    cin>>n>>m; //n: number of elements, m: number of operations
    for(int i=1;i<=n;i++)
    {
        cin>>niz[i];
        if(niz[i]<40)
            s.insert(i);
    }
    while(m--)
    {
        int o; // operations:1 or 2 or 3
        cin>>o;
        if(o==1)
        {
            int l,r;//all indices between l and r
            cin>>l>>r;
            vector<int> v;
            for(set <int>::iterator it=s.lower_bound(l);it!=s.lower_bound(r+1);++it)
            {
                niz[*it]++;
                if(niz[*it]>39)
                   v.push_back(*it);
            }
            for(int i=0;i<v.size();i++)
                s.erase(v[i]);
        }

        if(o==2)
        {   //compute the sum of  for all A[i] from l to r, inclusive.
            //Print this value modulo 10^9 .
            int l,r;
            ll ans=0;
            cin>>l>>r;
            for(set <int>::iterator it=s.lower_bound(l);it!=s.lower_bound(r+1);++it)
            {
                ans+=(f[niz[*it]]);
                if(ans>=MOD)
                    ans%=MOD;
            }
            cout<<ans<<"\n";
        }
        if(o==3)
        {
            int i,v; // set the value at index i to V.
            cin>>i>>v;
            s.insert(i);
            niz[i]=v;
        }
    }
    return 0;
}


// correct but not passed all cases
/*#include <functional>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <chrono>
using namespace std;

unsigned long DPFact[40];  //dynamic programming
const unsigned long M = 1000000000;
unsigned long factorial(int n)
{
   if (n == 0 || n == 1)            // base cases first
        return 1;
   if (DPFact[n] != -1)
        return DPFact[n];
   DPFact[n] = (n * factorial(n-1))%M;  // recursion case
   return DPFact[n];
}

int main()
{
   unsigned long allFact[40];
   for(int i=0; i<40; ++i)
      DPFact[i]=-1;                    // for memorising
   for(int i=0; i<40; ++i)
      allFact[i]=factorial(i);
    int n=0, m=0;
    unsigned long sum=0, factNow=0, factPrev=0;

    cin >> n >> m;
    vector<int> Arr(n);
    for(int i = 0; i < n; ++i)
    {
       cin >> Arr[i];
    }
    for(int i = 0; i < m; ++i)
    {
        int option=0;
        cin>>option;
        if(option==1)
        {
           int l=0,r=0;
           cin>> l>>r;
           if(l>=1 && (l<=r && r<=n) )
               for(int i=(l-1); i<r; ++i)  // to increment the a range of element in array by 1
                  Arr[i]=Arr[i]+1;
          // OR
               //auto start=chrono::steady_clock::now();  // get the start time;
               //for_each(Arr.begin()+(l-1), Arr.end()+(-n+1+r-l), [](int &d) { d+=1;}); //functor good one
                               //      or
                  //transform(Arr.begin()+(l-1), Arr.end()+(-n+1+r-l), Arr.begin()+(l-1),
                         //bind2nd(plus<int>(), 1));
               //auto end=chrono::steady_clock::now();  // get the end time;
               //find the difference
               //double elapsed_time_ns =double(chrono::duration_cast <chrono::nanoseconds>(end-start).count());
               //cout<<"Time taken for 1: "<<elapsed_time_ns/1e9<<endl;
               //system("pause;") ;
        }
        else if (option==2)
        {
           int l=0,r=0;
           cin>> l>>r;
           sum=0, factNow=0, factPrev=0;
           //copy(Arr.begin(), Arr.end(), ostream_iterator<int>(cout," "));
           if(l>=1 && (l<=r && r<=n) )
           {
                for(int i=(l-1); i<r; ++i) // sum of a range of element's factorials in array.
                {
                  if(i>=l && Arr[i-1]==Arr[i])
                  {
                     factNow=factPrev;
                     sum=(sum+factNow);
                     //cout<<"now if"<<endl;
                  }
                  else
                  {
                     if(Arr[i]<40)        // factorial 40 % 10^9 is just 0
                     {
                        factNow=allFact[Arr[i]];  // first factorial
                        sum=(sum+factNow);
                        factPrev=factNow;    // for next element, in case its same as current element
                     }
                     else
                     {
                        factNow=0;
                        sum=(sum+factNow);
                        factPrev=factNow;    // for next element, in case its same as current element
                     }
                  }
               }
           cout<<sum%M <<endl;
           }
        }
        else if (option==3)
        {
           int i=0,v=0;
           cin>> i>>v;
           if(i>=1 && i<=n)
            Arr[i-1]=v;    // to change a element in a array by another val
            // OR   fill_n (Arr.begin()+(i-1),1,v);
        }
    }
    return 0;
}*/
