#include <bits/stdc++.h>
using namespace std;
/* Lily wants to give Ron a piece of
chocolate only if it contains m consecutive squares
 whose integers sum to d.*/
int solve(int n, vector < int > s, int d, int m)
{
    int Count=0;
    for(int i=0; i<=n-m; ++i)
    {
        int sum=accumulate(s.begin()+i,s.begin()+i+m,0);
        if(sum==d)
            Count++;
    }
    return Count;
}
//******************************************************************
int main() {
    unsigned int n;
    cin >> n; // the number of squares in the chocolate bar
    if(n>=1 && n<=100)
    {
        vector<int> s;
        int temp=0;
        for(unsigned int s_i = 0; s_i < n; s_i++)
        {
            cin>>temp;
            if(temp>=1 && temp<=5)
                s.push_back(temp);
        }

        int d;//Ron's birth day
        int m;// Ron's birth month
        cin >> d >> m;
        int result = solve(n, s, d, m);
        cout << result << endl;
    }
    return 0;
}
