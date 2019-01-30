#include <iostream>
using namespace std;

int main() {
    int a=0;
    long b=0;
    char c='0';
    float f=0.0;
    double d=0.0000;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>f;
    cin>>d;

    cout<<a<<endl<<b<<endl<<c<<endl;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);
    cout<<f<<endl;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(9);
    cout<<d<<endl;
    return 0;
}
