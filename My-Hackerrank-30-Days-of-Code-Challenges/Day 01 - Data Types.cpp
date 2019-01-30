#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
        int iN=0;
double dO=0.0;
string S="nothing";

cin>> iN;
cin>> dO;
cin.ignore();
getline(cin,S);

cout<<endl<< i+iN<<endl;
// Set precision
cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(1);
cout<<d+dO<<endl;

// or  we need #include <iomanip>
//cout<<fixed<<showpoint<<setprecision(1) <<dO<<endl;
cout<<s+S;

    return 0;
}
