#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size, array[100],sum=0;;
    cin>> size;
    for(int i=0; i<size; i++)
    {
        cin>>array[i];
        sum=sum+array[i];
    }
  cout<< sum<<endl;
    return 0;
}
