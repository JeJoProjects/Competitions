#include <iostream>
#include <vector>
using namespace std;

string canConstruct(vector <unsigned long long int> a)
{
    unsigned long long sum=0;
    for(auto itr=a.begin(); itr!=a.end(); ++itr)
      sum+=*itr;
    if(sum%3==0)  return "Yes";
    else          return "No";

}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);

    int t;
    cin >> t;
    if(1<=t && t<=100)
    {
       for(auto a0 = 0; a0 < t; a0++)
       {
          int n;
         cin >> n;
         if(1<=n && n<=100)
         {
            vector<unsigned long long int> a(n);
            for(auto itr=a.begin(); itr!=a.end(); ++itr)
               cin>>*itr;

            string result = canConstruct(a);
            cout << result << endl;
         }
       }
    }
    return 0;
}
