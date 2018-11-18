#include <bits/stdc++.h>
using namespace std;

int bonAppetit(int n, int k, int b, vector <int> ar) {
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
        cout << "Bon Appetit\n";
        exit(1);
    }
    return b-sum;
}

int main() {
    int n;//the number of items ordered
    int k;//index of the item that Anna did not eat
    cin >> n >> k;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++)
       cin >> ar[ar_i]; // the cost

    int b; // the amount of money that Brian charged Anna for her share of the bill.
    cin >> b;
    int result = bonAppetit(n, k, b, ar);
    cout<<result<<endl;
    /*if(result/2==b)
    {
        cout<<"Bon Appetit"<<endl;
        return 0;
    }
    else
        cout<<b-(result/2)<<endl;*/
    return 0;
}
