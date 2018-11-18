#include <bits/stdc++.h>
using namespace std;
/* *****************************************************************
// O(n log(n)) solution.
1. find the LCM of all the integers of array A.
2. find the GCD of all the integers of array B.
3. Count the number of multiples of LCM that evenly divides the GCD.
******************************************************************** */
int getTotalX(vector <int> a, vector <int> b)
{
    int Count=0, Change=0;
    //int MAX_A=max_element(a.begin(), a.end()); // would be more optimum, I guess.
    for(unsigned int x=1; x<=100; ++x)
    {
       for(unsigned int i_a=0; i_a< a.size(); ++i_a)
          if(x%a[i_a]!=0)
             Change++;

       if(Change==0) // means, all works perfectly for set1(setA)
       {
          for(unsigned int j_b=0; j_b< b.size(); ++j_b )
            if(b[j_b]%x!=0)
             Change++;
          if(Change==0) // means, all works perfectly for set2(setB)
             Count++;   // then count it please!
               //cout<<x<<endl;
       }
       Change=0; // reset to 0, for next value of x.
    }
    return Count;
}

int main()
{
    unsigned int n; //set1:total number elements(of positive integers)
    unsigned int m; //set2:total number elements
    cin >> n >> m;
    if((n>=1 && n<=10) && (m>=1 && m<=10))
    {
       vector<int> a,b; //set1 and set2 with n elements n and m resp.
       for(unsigned int a_i = 0; a_i < n; ++a_i)
       {
          int temp=0;
          cin>>temp;
          if(temp>=1 && temp<=100)
            a.push_back(temp);
       }

       for(unsigned int b_i = 0; b_i < m; b_i++)
       {
          int temp=0;
          cin>>temp;
          if(temp>=1 && temp<=100)
            b.push_back(temp);
       }

       int total = getTotalX(a, b);
       cout << total << endl;
    }
    return 0;
}
// Editorial
/*
#include <bits/stdc++.h>
using namespace std;
#define forn(i,n) for (int i = 0; i < int(n); ++i)

const int maxc = 100;

int gcd(int a, int b) {
    while (a && b) {
        if (a >= b)
            a %= b;
        else
            b %= a;
    }
    return a + b;
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    #ifdef LOCAL
    assert(freopen("test.in", "r", stdin));
    #endif
    int n, m;
    cin >> n >> m;
    int A = 1, B = 0;
    forn (i, n) {
        int x;
        cin >> x;
        A = lcm(A, x);
        if (A > maxc) {
            cout << 0 << '\n';
            return 0;
        }
    }
    forn (i, m) {
        int x;
        cin >> x;
        B = gcd(B, x);
    }
    if (B % A != 0) {
        cout << 0 << '\n';
        return 0;
    }
    B /= A;
    int res = 0;
    for (int i = 1; i * i <= B; ++i) {
        if (B % i == 0) {
            ++res;
            if (i * i != B)
                ++res;
        }
    }
    cout << res << '\n';
}
*/
