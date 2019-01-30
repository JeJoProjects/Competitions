#include <iostream>


int main() {
	int t,n;std::string s;
	std::cin>>t;
	while(t--)
	{
	    std::cin>>s;n=s.length();
	    int i=0,j=n-1;

	    while(s[i]!='c')
         i++;
	    while(s[j]!='-')
         j--;
	    int f=0;
	    for(int k=i+1;k<=j;k++)
         if(s[k]=='a')
            f++;
	    std::cout<<f<<std::endl;

	}
