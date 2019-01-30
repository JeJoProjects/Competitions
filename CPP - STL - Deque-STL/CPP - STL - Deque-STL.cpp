#include <iostream>
#include <deque>
#include <iterator>
#include <algorithm>


int main()
{
   ios_base::sync_with_stdio(false);
   std::cin.tie(0);

   unsigned int T;std::cin >> T;// number of test cases T
   if(1<=T && T<=1000)
   {
      while(T>0)
      {
         unsigned int size, K=0;
         std::cin >> size >> K;
         if( (1<= size && size<=10000) && (1<=K && K<=size) )
         {
            deque<unsigned int> Deq, Ans;
            copy_n(istream_iterator<unsigned int>(std::cin), size, back_inserter(Deq));

            auto idx=0;
            for(auto itr=Deq.cbegin(); itr!=Deq.cend()-K+1; ++itr)
            {
               std::cout<<*max_element(Deq.cbegin()+idx, Deq.cbegin()+K+idx) <<" ";
               ++idx;
            }
            std::cout<<std::endl;
            T--;
         }
     }
   }

   return 0;
}
//  Above solution has time com more than O(n).. so use below one

/*
#include <iostream>
#include <deque>


void printKMax(int arr[], int n, int k){

    deque<int> dq;

    for (int i=0; i<n; i++){

        // base case for first element
        if (dq.empty()){
            dq.push_back(i);
        }

        // remove elements outside the current window
        if (dq.front() <= (i - k)){
            dq.pop_front();
        }

        // move max element to the front
        while (!dq.empty() && arr[i] >= arr[dq.back()]){
            dq.pop_back();
        }

        dq.push_back(i);

        // print out only when the first window is completed
        if (i >= (k - 1)){
            std::cout << arr[dq.front()] << " ";
        }
    }
    std::cout << std::endl;
}
int main()
{
   ios_base::sync_with_stdio(false);
   std::cin.tie(0);
   std::cout.tie(0);
   int t;
   std::cin >> t;
   while(t>0) {
      int n,k;
       std::cin >> n >> k;
       int i;
       int arr[n];
       for(i=0;i<n;i++)
            std::cin >> arr[i];
       printKMax(arr, n, k);
       t--;
     }
     return 0;
}

*/
