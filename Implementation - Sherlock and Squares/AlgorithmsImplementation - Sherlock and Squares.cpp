#include <iostream>
#include <cmath>
#define speed std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr)
typedef signed long long int int64;

int64 SquaresCount(const int64& a, const int64& b)
{
    int64 n = 0, i = sqrt(a);
    if (i * i == a) n++;
    while (++i*i <= b) n++;
    return n;
}

int main()
{
    speed;
    int T; std::cin>>T;
    while(T--)
    {
        int64 A,B;
        std::cin >> A >> B;
        std::cout<<SquaresCount(A,B)<<std::endl;
    }
    return 0;
}

/**
static int CountSquares(int start, int end, int count) {
        if(start > end) return count; // Return the count if we're passed the end.

        float sqrt = (float)Math.Sqrt(start); // Get the square root as a float, so we can check remainder.

        if(sqrt % 1 != 0) { // If the remainder isn't zero, it's not a square number, so increment the start.
            return CountSquares(++start, end, count);
        }

        // If the remainder is zero, then it is a square number, so we can increment the count.
        // Square numbers have a pattern of (2 * sqrt) + 1 of the previous square.
        // Example:
        // Square root of 4 is 2.
        // (2 * 2) + 1 is 5
        // Therefore, the next square is, 4 + 5 = 9.
        // We reduce the redundant loops with this.

        return CountSquares(start + (int)(2 * sqrt) + 1, end, ++count);
    }
    */
