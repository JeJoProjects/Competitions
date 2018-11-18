#include <stack>
#include <iostream>
typedef long long int int64;

int main()
{
    int64 n, m, tmp;
    std::cin >> n;

    std::stack<int64> scores;
    for (int64 i = 0; i < n; ++i)
    {
        std::cin >> tmp;    // save only different scores
        if (scores.empty() || scores.top() != tmp) scores.push(tmp);
    }

    std::cin >> m;
    for (int64 i = 0; i < m; ++i)
    {
        std::cin >> tmp;
        // pop until the finds Alce' scores >= leaderbord
        while (!scores.empty() && tmp >= scores.top())  scores.pop();
        std::cout << (scores.size() + 1) << std::endl;
    }
    return 0;
}

/** Another way: but for Test cases 6&7 time out */
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

#define speed std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr)

typedef long long int int64;
int main()
{
    speed;
    //number of players already on the leaderboard
    int64 n; std::cin>>n;
    std::vector<std::pair<int64,int64>> Scores;
    Scores.reserve(n);

    //decide & store the initial ranks along with the input
    int64 Rank = 1;
    for(int64 i=0; i<n; ++i)
    {
        int64 temp;
        std::cin>>temp;

        if(i==0)    // first case
            Scores.emplace_back(std::make_pair(temp, Rank));
        // if scores are equal
        if( (i != 0) && (temp == Scores[i-1].first) )
            Scores.emplace_back(std::make_pair(temp, Rank));
        // if scores are different
        if( (i != 0) && (temp != Scores[i-1].first) )
        {
            ++Rank;
            Scores.emplace_back(std::make_pair(temp, Rank));
        }
    }
    //number of levels Alice beats
    int64 m; std::cin>>m;
    for(int64 i = 0; i < m; ++i)
    {
        int64 temp;
        std::cin >> temp;
        // lamda returns the first case of
        // Alice score <= Leaderboard(from bottom)
        auto position = std::find_if(Scores.rbegin(), Scores.rend(),
            [&](std::pair<int64,int64> P)
            {
                return (temp <= P.first);
            });
        //if its an end of vector means, Alice's Rank = 1
        if(position != Scores.rend())
        {
            ((*position).first == temp) ?
                std::cout << (*position).second << "\n":
                std::cout << (*position).second + 1 << "\n";
        }
        else
            std::cout << "1\n";

    }
    return 0;
}

