#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a,b; // strings
    cin>>a;
    cin>>b;
    cout<<a.length()<<" "<<b.length()<<endl; //representing the lengths
    cout<<a+b<<endl;        // concatenating
    swap(a.at(0), b.at(0)); // first characters are swapped.
    cout<<a<<" "<<b<<endl;
    return 0;
}
