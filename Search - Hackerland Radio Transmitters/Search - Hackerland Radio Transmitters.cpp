#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n; std::cin >> n; //the number of houses
    int k; std::cin >> k; //the range of each transmitter

    std::vector<int> vec(n);
    for(auto &it: vec) std::cin >> it;

    std::sort(vec.begin(), vec.end());

    int numTransmitters = 0, location = 0, i = 0;

    while(i < n)
    {
        /** Key is to use greedy algorithm
        *1. To always place the transmitter at the house furthest
        *   to the right possible to cover the range.
        *2. Let this i be i_orig go to right as far as we cover
            i_orig as well
        *3. Then go to the right of vec[i] by k because transmitter
            at vec[i] covers houses to its right as well*/

        numTransmitters++;
        location = vec[i] + k;
        while(i < n && vec[i] <= location)  i++;

        i--;    //this is where we place the transmitter

        location = vec[i] + k;
        while(i < n && vec[i] <= location)  i++;
    }
    std::cout << numTransmitters << std::endl;

    return 0;
}
