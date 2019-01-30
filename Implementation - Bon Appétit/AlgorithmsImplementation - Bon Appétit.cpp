#include <bits/stdc++.h>


int bonAppetit(int n, int k, int b, std::vector <int> ar) {
    // Complete this function
    int i, sum;

    sum = 0;
    for (i = 0; i < ar.size(); i++)
    {
        if (i != k) sum += ar[i];
    }

    sum /= 2;

    if (b == sum)
    {
        std::cout << "Bon Appetit\n";
        exit(1);
    }
    return b-sum;
}

int main() {
    int n;//the number of items ordered
    int k;//index of the item that Anna did not eat
    std::cin >> n >> k;
    std::vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++)
       std::cin >> ar[ar_i]; // the cost

    int b; // the amount of money that Brian charged Anna for her share of the bill.
    std::cin >> b;
    int result = bonAppetit(n, k, b, ar);
    std::cout<<result<<std::endl;
    /*if(result/2==b)
    {
        std::cout<<"Bon Appetit"<<std::endl;
        return 0;
    }
    else
        std::cout<<b-(result/2)<<std::endl;*/
    return 0;
}
