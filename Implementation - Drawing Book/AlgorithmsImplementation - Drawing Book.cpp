#include <bits/stdc++.h>
using namespace std;

unsigned int solve(unsigned int n, unsigned int p)
{
    unsigned int ans=0;
    if((n-p)>=ceil(n/2.0)) //contition to be from front
    {
        for(unsigned int i=0; i<p; ++i)
        {
            if(i==(p-1))
                break;
            if(i%2==0)
                ++ans;
        }

        return ans;
    }
    else  // from back
    {
        for(unsigned int i=n; i>p; --i)
        {
            if(i%2==0)
                ++ans;
            if(i==(p+1))
                break;
        };
        return ans;
    }
}
// or simple one
/*
unsigned int solve(unsigned int n, unsigned int p)
{
    return min(p/2, n/2-p/2);
}
*/
int main()
{
    unsigned int n=0,p=0; // total pages
    cin >> n;
    if(n>=1 && n<=100000)
    {
        cin >> p;        // need to be found
        if(p>=1 && p<=n)
        {
            unsigned int result = solve(n, p);
            cout << result << endl;
        }
    }
    return 0;
}
