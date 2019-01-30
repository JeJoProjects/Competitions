#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int n;
    cin>>n;
    if(n>=2 &&n<=20)
    {
        for(int i=1; i<=10; ++i)
            cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}
