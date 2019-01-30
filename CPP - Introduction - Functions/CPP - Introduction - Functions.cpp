#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    vector<int> vec;
    int ans=0;
    vec.push_back(a);
    vec.push_back(b);
    vec.push_back(c);
    vec.push_back(d);
    sort(vec.begin(), vec.end());
    ans=vec[3];
    return ans;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
