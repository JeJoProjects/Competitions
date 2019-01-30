#include <bits/stdc++.h>
using namespace std;

bool Comp(string now, string next)
{
   int a=now.length();
   int b=next.length();
   if(a==b) return now<next;
   return a<b;
}

int main()
{
    int n=0, Len=0;
    string temp;
    cin >> n;
    vector<string> Vec(n);
    for(int i = 0; i < n; i++)
       cin >> Vec[i];
   sort(Vec.begin(), Vec.end(), Comp);
    /*Len=Vec.size();
    for(int Times=0; Times<Len-1; ++Times)
       for(int i = 0; i <=Len-1-Times; i++)
          if(Vec[i]>Vec[i+1])
          {
               string temp=Vec[i];
               Vec[i]=Vec[i+1];
               Vec[i+1]=temp;
               cout<<Vec[i]<<"  "<<Vec[i+1]<<endl;
          }*/
   for(vector<string>::iterator itr=Vec.begin();
                                 itr!=Vec.end(); ++itr)
        cout<<*itr<<endl;
    return 0;
}
