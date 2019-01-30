/** For the given std::set of queries find the Unique element
 *  count of an array using MO's Algorithum. */
#include <iostream>
#include <std::vector>
#include <algorithm>
#include <iterator>
#include <unordered_map>


struct Query   // struct for storing the queries
{
    int Left;
    int Right;
    int Index;
};

inline void Add(const int i, int &ans, std::vector<int> &Arr, std::vector<int> &countArray)
{
    ++countArray[Arr[i]];
    if(countArray[Arr[i]] == 1)
            ans += countArray[Arr[i]];
    if(countArray[Arr[i]] == 2)
            ans -= countArray[Arr[i]];
}


inline  void Remove(const int i, int &ans, std::vector<int> &Arr, std::vector<int> &countArray)
{
    --countArray[Arr[i]];
    if(countArray[Arr[i]] == 1)
            ans += countArray[Arr[i]];
    if(countArray[Arr[i]] == 0)
            ans -= countArray[Arr[i]];
}

int main()
{
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int _size;    std::cin >> _size;

    std::vector<int> Arr;                            Arr.reserve(_size);
    copy_n(istream_iterator<int>(std::cin), _size, back_inserter(Arr));
    //copy(Arr.cbegin(), Arr.cend(), ostream_iterator<int>(std::cout, "\t"));

    int id = -1;
    int sqrt_n = sqrt(_size);
    int Q;      std::cin >> Q;
    std::vector<Query> qArr(Q);
    unordered_map<int, int> std::map;

    for (int i = 0; i < _size; ++i)
    {
        if (std::map.count(Arr[i]) == 0)
            std::map[Arr[i]] = ++id;
        Arr[i] = std::map[Arr[i]];
    }

    // read queries
    for (int i = 0; i < Q; ++i)
    {
        int L,R;
        std::cin >> L >> R;
        qArr[i].Left  = L-1;
        qArr[i].Right = R-1;
        qArr[i].Index = i;
    }
    // sort the queries according to(MO's Algorithum)
    sort(qArr.begin(),qArr.end(),
         [&](const Query &lhs, const Query &rhs)->bool
         {
             return ( (lhs.Left/sqrt_n == rhs.Left/sqrt_n) ?
                                    lhs.Right < rhs.Right:  // Qs with same Left case
              (lhs.Left / sqrt_n) < (rhs.Left / sqrt_n) );  // Qs with diff values case
         });

    int currStart = 0;
    int currEnd   = 0;
    int tempAnswer= 0;
    std::vector<int> Answer(Q);
    std::vector<int> countArray(_size);
    for (int i = 0; i < Q; ++i)
    {
        int L = qArr[i].Left;
        int R = qArr[i].Right;

/** Remove extra elements of previous range. For
 *  example if previous range is [0, 3] and current
 *  range is [2, 5], then a[0] and a[1] are subtracted */
        while (currStart < L)
        {
            Remove(currStart, tempAnswer, Arr, countArray);
            ++currStart;
        }
/** Add Elements of current Range */
        while (currStart > L)
        {
            Add(currStart - 1, tempAnswer, Arr, countArray);
            --currStart;
        }

        while (currEnd <= R)
        {
            Add(currEnd, tempAnswer, Arr, countArray);
            ++currEnd;
        }

/** Remove elements of previous range.  For example
 *  when previous range is [0, 10] and current range
 *  is [3, 8], then a[9] and a[10] are subtracted   */
        while (currEnd > R + 1)
        {
            Remove(currEnd - 1, tempAnswer, Arr, countArray);
            --currEnd;
        }
        Answer[qArr[i].Index] = tempAnswer;
    }

    for(const auto &it: Answer) std::cout<<it<<std::endl;

    return 0;
}
