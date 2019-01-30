/** Explanation
12	1 10 2 7 11 4 14 5 X 9 15 8 13 6 3
An inversion is when a tile precedes another tile with a lower number on it. The solution state has zero inversions. For example, if, in a 4 x 4 grid, number 12 is top left, then there will be 11 inversions from this tile, as numbers 1-11 come after it. To explain it another way, an inversion is a pair of tiles (a,b) such that a appears before b, but a>b. Count the number of inversions in the grid. For example, on the grid

the 12 gives us 11 inversions
the 1 gives us none
the 10 gives us 8 inversions
the 2 gives us none
the 7 gives us 4 inversions
the 11 gives us 6 inversions
the 4 gives us one inversion
the  14 gives us 6
the 5 gives us one
the 9 gives us 3
the 15 gives us 4
the 8 gives us 2
2 from the 13
one from the 6

So there are 49 inversions in this example.

The formula says:
1. If the grid width is odd, then the number of inversions in a solvable situation is even.
2. If the grid width is even, and the blank is on an even row counting from the bottom (second-last, fourth-last etc), then the number of inversions in a solvable situation is odd.
3. If the grid width is even, and the blank is on an odd row counting from the bottom (last, third-last, fifth-last etc) then the number of inversions in a solvable situation is even.

( (grid width odd) && (#inversions even) )  ||  ( (grid width even) && ((blank on odd row from bottom) == (#inversions even)) )
*/

#include <iostream>
#include <std::vector>
#include <algorithm>

int main()
{
   int T=0; std::std::cin >> T;

   while(T--)
   {
      int N; std::std::cin >> N;

      std::std::vector<int> vec(N);
      for(auto &it: vec)   std::std::cin >> it;

/** Here the grid is 3x3, i.e: odd grid!
*   therefore, if the inversion is even solvable */

      int inversions = 0;
      for(int i = 0; i < N-1; ++i)
         for(int j = i+1; j < N; ++j)
            if(vec[i] > vec[j])
               ++inversions;

      (inversions & 1) ?
         std::std::cout << "NO" << "\n":
         std::std::cout << "YES" << "\n";
   }
   return 0;
}
