#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    unsigned int n=0,q=0;

    cin>>n;
    if(n>=1 && n<=100000)
    {
       cin>>q;
       if(q>=1 && q<=100000)
       {
          vector<vector<unsigned int>> vec(n);
          for(unsigned int i=0; i<n; ++i)
          {
             unsigned int k=0;
             cin>>k;
             if(k>=1 && k<=300000)
             {
                for(unsigned int len=0; len<k; ++len)
                {
                   unsigned int temp=0;
                   cin>>temp;
                   vec[i].push_back(temp);
                }
             }
          }
          // print the queries!
          for (unsigned int i=0;i<q;i++)
          {
             unsigned int r,c;
             cin >> r >> c;
             cout << vec[r][c] << endl;
          }
       }
    }
    return 0;
}
/** Or Editorial */


#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int n;
    int q;
    cin >> n >> q;

    // Create an array of pointers to integer arrays
    // (i.e., an array of variable-length arrays)
    int** outer = new int*[n];

    // Fill each index of 'outer' with a variable-length array
    for(int i = 0; i < n; i++) {
        int k;
        cin >> k;
        // Create an array of length 'k' at index 'i'
        outer[i] = new int[k];

        // Fill each cell in the 'inner' variable-length array
        for(int j = 0; j < k; j++) {
            cin >> outer[i][j];
        }
    }

    // Perform queries:
    while(q-- > 0) {
        int outer_index;
        int inner_index;
        cin >> outer_index >> inner_index;

        // Find the variable-length array located at outer_index
        // and print the value of the element at inner_index.
        cout << outer[outer_index][inner_index] << endl;
    }

    return 0;
}
