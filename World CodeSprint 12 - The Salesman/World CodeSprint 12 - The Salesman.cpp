#include <iostream>
#include <vector>
#include <stdlib.h>
#include <algorithm>
using namespace std;

int minimumTime(vector <int> x)
{
   int mini=0;
    sort(x.begin(), x.end());
    for(unsigned int i=0; i<x.size()-1; ++i)
       mini+=abs(x[i]-x[i+1]);
   return mini;
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        vector<int> x(n);
        for(int x_i = 0; x_i < n; x_i++){
           cin >> x[x_i];
        }
        int result = minimumTime(x);
        cout << result << endl;
    }
    return 0;
}

