#include <sstream>
#include <vector>
#include <iostream>
#include <iterator>
using namespace std;

vector<int> parseInts(string str)
{
    stringstream ss(str);
    vector<int> vec;
    string num;
   // convert it as piece of string until ',' and store in num
    while(getline(ss,num,','))
          vec.push_back( atoi(num.data()) );

   return vec;
}

int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    copy(integers.begin(), integers.end(), ostream_iterator<int>(cout,"\n") );
    return 0;
}
