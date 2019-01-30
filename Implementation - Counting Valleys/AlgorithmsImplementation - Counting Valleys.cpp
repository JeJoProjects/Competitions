#include <iostream>


int main()
{
    unsigned int n; //denoting the number of steps in Gary's hike.
    std::cin>>n;
    if(n>=2 && n<=1000000)
    {
        char S[n];
        int sea_level=0, Ans=0;
        for(unsigned int i=0; i<n; ++i)
        {
            std::cin>>S[i]; //character in the array describes Gary's  [i]th step during the hike.
            if(S[i]=='U')
                ++sea_level;
            if(S[i]=='D')
                --sea_level;
            if(sea_level==0 && S[i]=='U')
                ++Ans;
        }
    std::cout<<Ans<<std::endl;
    }
    return 0;
}
// another way
/*int main()
{
    std::cin.ignore(0xF4240, '\n');
    std::string hike;
    std::cin >> hike;

    int h(0), val(0); //height, valleys
    bool in_val(false); //inside valley now
    for(char s : hike)
    {
        h += s == 'U' ? 1 : -1;
        if(in_val && h >= 0) in_val = false;

        if(!in_val && h < 0)
        {
            in_val = true;
            ++val;
        }
    }

    std::cout << val << std::endl;

    return 0;
}*/
