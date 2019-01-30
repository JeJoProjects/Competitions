#include <iostream>
#include <algorithm>
#include <vector>
#include <stdint.h>
using namespace std;
int main() {
    int64_t Val[5], SUM=0;
    vector<int64_t> sum;
   for(int i=0; i<5; ++i)
       cin>>Val[i];
    for(int i=0; i<5; ++i)
    {
        SUM=Val[0]+Val[1]+Val[2]+Val[3]+Val[4] - Val[i];
        sum.push_back(SUM);
    }
    for(vector<int64_t>::iterator itr=sum.begin(); itr!=sum.end(); ++itr)
      cout<<*itr<<endl;
    sort(sum.begin(), sum.end());
    cout<<sum[0]<<" "<<sum[4]<<endl;
    return 0;
}
