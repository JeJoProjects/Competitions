#include <functional>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <chrono>


unsigned long DPFact[40];  //dynamic programming
const unsigned long M = 1000000000;
unsigned long factorial(int n)
{
    if (n == 0 || n == 1)            // base cases first
        return 1;
    if (DPFact[n] != -1)
        return DPFact[n];
    DPFact[n] = (n * factorial(n - 1)) % M;  // recursion case
    return DPFact[n];
}

int main()
{
    unsigned long allFact[40];
    for (int i = 0; i < 40; ++i)
        DPFact[i] = -1;                    // for memorising
    for (int i = 0; i < 40; ++i)
        allFact[i] = factorial(i);
    int n = 0, m = 0;
    unsigned long sum = 0, factNow = 0, factPrev = 0;

    std::cin >> n >> m;
    std::vector<int> Arr(n);
    for (int i = 0; i < n; ++i)
    {
        std::cin >> Arr[i];
    }
    for (int i = 0; i < m; ++i)
    {
        int option = 0;
        std::cin >> option;
        if (option == 1)
        {
            int l = 0, r = 0;
            std::cin >> l >> r;
            if (l >= 1 && (l <= r && r <= n))
                for (int i = (l - 1); i < r; ++i)  // to increment the a range of element in array by 1
                    Arr[i] = Arr[i] + 1;
            // OR
                 //auto start=chrono::steady_clock::now();  // get the start time;
                 //for_each(Arr.begin()+(l-1), Arr.end()+(-n+1+r-l), [](int &d) { d+=1;}); //functor good one
                                 //      or
                    //transform(Arr.begin()+(l-1), Arr.end()+(-n+1+r-l), Arr.begin()+(l-1),
                           //bind2nd(plus<int>(), 1));
                 //auto end=chrono::steady_clock::now();  // get the end time;
                 //find the difference
                 //double elapsed_time_ns =double(chrono::duration_cast <chrono::nanoseconds>(end-start).count());
                 //std::cout<<"Time taken for 1: "<<elapsed_time_ns/1e9<<std::endl;
                 //system("pause;") ;
        }
        else if (option == 2)
        {
            int l = 0, r = 0;
            std::cin >> l >> r;
            sum = 0, factNow = 0, factPrev = 0;
            // std::copy(Arr.begin(), Arr.end(), ostream_iterator<int>(std::cout," "));
            if (l >= 1 && (l <= r && r <= n))
            {
                for (int i = (l - 1); i < r; ++i) // sum of a range of element's factorials in array.
                {
                    if (i >= l && Arr[i - 1] == Arr[i])
                    {
                        factNow = factPrev;
                        sum = (sum + factNow);
                        // std::cout<<"now if"<<std::endl;
                    }
                    else
                    {
                        if (Arr[i] < 40)        // factorial 40 % 10^9 is just 0
                        {
                            factNow = allFact[Arr[i]];  // first factorial
                            sum = (sum + factNow);
                            factPrev = factNow;    // for next element, in case its same as current element
                     }
                        else
                        {
                            factNow = 0;
                            sum = (sum + factNow);
                            factPrev = factNow;    // for next element, in case its same as current element
                        }
                  }
               }
                std::cout << sum % M << std::endl;
           }
        }
        else if (option == 3)
        {
            int i = 0, v = 0;
            std::cin >> i >> v;
            if (i >= 1 && i <= n)
                Arr[i - 1] = v;    // to change a element in a array by another val
                // std::fill_n (Arr.begin()+(i-1),1,v);
        }
    }
    return 0;
}

