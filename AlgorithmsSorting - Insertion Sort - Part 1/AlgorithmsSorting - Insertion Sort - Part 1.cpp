#include <vector>
#include <iostream>

using namespace std;
void printAr(vector<int> ar){
    for(int ar_i=0; ar_i<ar.size(); ar_i++) {
        cout << ar[ar_i] << " ";
    }
    cout << "\n";
}

void insertionSort(vector <int>  ar) {
    int j = ar.size() - 1;
    int tmp = ar[j];
    for(int i = j; i >= 0; i--){
        if (i == 0 || ar[i-1] < tmp){
            ar[i] = tmp;
            printAr(ar);
            break;
        } else {
            ar[i] = ar[i-1];
            printAr(ar);
        }
    }
}
int main(void)
{
   int arr_size;
   cin >> arr_size;

   vector <int>  arr(arr_size);
   for(unsigned int arr_val=0; arr_val<arr_size; ++arr_val)
      cin>>arr[arr_val];
    insertionSort(arr);
    return 0;
}

//below function gives segmentation fault, even its working
/*void insertionSort(vector <int>  vec)
{
   unsigned int SIZE=vec.size();
   int temp=vec[SIZE-1];
   for(unsigned int i=SIZE-1; i>=0;--i)
   {
      if(vec[i-1]<temp || i==0)
      {
         vec[i]=temp;
         //copy(vec.begin(), vec.end(), ostream_iterator<int>(cout," "));
         for(unsigned int pos=0; pos<SIZE; ++pos)
            cout<<vec[pos]<<" ";
         cout<<endl;
         break;
      }
      else
      {
         vec[i]=vec[i-1];
         for(unsigned int pos=0; pos<SIZE; ++pos)
            cout<<vec[pos]<<" ";
         cout<<endl;
      }
   }
}*/

//failed test 2 below
/*
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

void insertionSort(vector <int>  vec)
{
   int temp=0;
   for(unsigned int i=vec.size()-1; i>=1;--i)
   {
      if(temp<vec[i-1])
      {
         temp=vec[i];
         for(unsigned int r=i; r>=1; --r)
         {
            if(temp<vec[r-1])
               vec[r]=vec[r-1];
            else
               vec[r]=temp;
            copy(vec.begin(), vec.end(), ostream_iterator<int>(cout," "));
            cout<<endl;
            if(vec[r-1]<temp || r-1==0)
               goto END;
         }
      }
      END:break;
   }
}
int main(void)
{
   int arr_size;
   cin >> arr_size;

   vector <int>  arr(arr_size);
   for(unsigned int arr_val=0; arr_val<arr_size; ++arr_val)
      cin>>arr[arr_val];
    insertionSort(arr);
    return 0;
}*/
