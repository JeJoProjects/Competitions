#include <std::vector>
#include <iostream>
#include <algorithm>


int main()
{
    unsigned int n=0;
    std::cin>>n;
    if(n>=1 && n<=60)
    {
        unsigned int grade[n], rgrade[n], temp=0;
        for(unsigned int i=0; i<n; ++i)
        {
            std::cin>>temp;
            if(temp>=0 && temp<=100)
            {
               /* read the following
                 if(x>=38 and x%5>=3)
                  {
                     while(x%5!=0)
                     x++;
                  }*/
                grade[i]=temp;
                if(grade[i]<38)
                    rgrade[i]=grade[i];
                //check the three cases:<3 means either 0or1or2.
                else
                    for(unsigned int posi=1; posi<=2; ++posi)
                    {
                        if( (grade[i]+1)%5 ==0)
                            rgrade[i]=grade[i]+1;
                        else if( (grade[i]+2)%5 ==0)
                            rgrade[i]=grade[i]+2;
                        else
                            rgrade[i]=grade[i];
                    }
            }
        }
        for(unsigned int i=0; i<n; ++i)
            std::cout<<rgrade[i]<<std::endl;
    }
    return 0;
}

//********************** or ***************************
/*#include <bits/stdc++.h>


void solution() {
     int n, x;
     std::cin>>n;
     for(int i=0; i<n; i++){
        std::cin>>x;
        if(x>=38 and x%5>=3){
            while(x%5!=0){
               x++;
            }
        }
        std::cout<<x<<std::endl;
     }
}

int main () {
    solution();
    return 0;
}*/
