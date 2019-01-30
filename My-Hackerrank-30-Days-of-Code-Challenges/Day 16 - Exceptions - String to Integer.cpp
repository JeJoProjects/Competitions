#include <string>
#include <iostream>
using namespace std;


int main()
{
    string S;
    cin >> S;
    try
    {
        int Num=stoi(S);
        cout<<Num<<endl;
    }
    catch(exception a)
    {
        cout<<"Bad String"<<endl;
    }

    return 0;
}

