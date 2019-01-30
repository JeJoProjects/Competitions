#include <iostream>
using namespace std;

int main() {
    int N;
    cin>>N;
    int endV=0;
    for(int r=1; r<=N; ++r)
    {
       endV=N-r;
       for(int c=1; c<=N;++c)
       {
          if(c<=endV) cout<<" ";
          else cout<<"#";
       }
      cout<<endl;
    }
    return 0;
}
