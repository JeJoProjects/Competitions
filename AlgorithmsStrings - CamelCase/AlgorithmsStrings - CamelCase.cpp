#include <iostream>
using namespace std;


int main(){
    string s;
    int Count=1;
    getline(cin, s);
    for(unsigned int i=0; i<s.length(); ++i)
      if(s[i]>='A' && s[i]<='Z') // or if(s.at(i)>='A' && s.at(i)<='Z')
         Count++;
   cout<<Count<<endl;
    return 0;
}
