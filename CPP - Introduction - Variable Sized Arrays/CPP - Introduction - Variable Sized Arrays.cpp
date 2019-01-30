#include <std::vector>
#include <iostream>
#include <algorithm>

int main() {
    unsigned int n=0,q=0;

    std::cin>>n;
    if(n>=1 && n<=100000)
    {
       std::cin>>q;
       if(q>=1 && q<=100000)
       {
          std::vector<std::vector<unsigned int>> vec(n);
          for(unsigned int i=0; i<n; ++i)
          {
             unsigned int k=0;
             std::cin>>k;
             if(k>=1 && k<=300000)
             {
                for(unsigned int len=0; len<k; ++len)
                {
                   unsigned int temp=0;
                   std::cin>>temp;
                   vec[i].push_back(temp);
                }
             }
          }
          // print the queries!
          for (unsigned int i=0;i<q;i++)
          {
             unsigned int r,c;
             std::cin >> r >> c;
             std::cout << vec[r][c] << std::endl;
          }
       }
    }
    return 0;
}
/** Or Editorial */


#include <iostream>



int main(int argc, char *argv[]) {
    int n;
    int q;
    std::cin >> n >> q;

    // Create an array of pointers to integer arrays
    // (i.e., an array of variable-length arrays)
    int** outer = new int*[n];

    // Fill each index of 'outer' with a variable-length array
    for(int i = 0; i < n; i++) {
        int k;
        std::cin >> k;
        // Create an array of length 'k' at index 'i'
        outer[i] = new int[k];

        // Fill each cell in the 'inner' variable-length array
        for(int j = 0; j < k; j++) {
            std::cin >> outer[i][j];
        }
    }

    // Perform queries:
    while(q-- > 0) {
        int outer_index;
        int inner_index;
        std::cin >> outer_index >> inner_index;

        // Find the variable-length array located at outer_index
        // and print the value of the element at inner_index.
        std::cout << outer[outer_index][inner_index] << std::endl;
    }

    return 0;
}
