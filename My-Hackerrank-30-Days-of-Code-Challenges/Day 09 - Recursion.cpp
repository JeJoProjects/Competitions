#include <bits/stdc++.h>


unsigned long long int factorial(int n) {
   if(n==0)
       return 1;
    else
        return n*factorial(n-1);
}

int main() {
    int n;
    std::cin >> n;
    unsigned long long int result = factorial(n);
    std::cout << result << std::endl;
    return 0;
}
