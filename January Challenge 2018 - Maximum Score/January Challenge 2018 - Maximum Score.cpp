#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ull unsigned long long int

class SegmentTree
{
private:
   ull n;
	vector<ull> data;
public:
	SegmentTree(ull count)                   // array initialization constructor.
	{
		this->n    = count;                   // the size of the array.
		this->data = vector<ull>(2 * n, 0);   // initialize the vector with 2n.
	}

	SegmentTree(vector<ull> const &values)
	{  // vector initialization constructor.
		this->n = values.size();
		this->data = vector<ull>(2 * n);
		copy(values.begin(), values.end(), &data[0] + n);
		for (auto idx = n - 1; idx > 0; idx--)
			data[idx] = max(data[idx * 2], data[idx * 2 + 1]);
	}

	void updateST(ull idx, ull value)      // to input/ update the values.
	{
		idx += n;                           // index=index+size of the array.
		data[idx] = value;                  // assign the value to respective index.

		while (idx > 1)            // Updating all other minimum values in the tree.
      {
			idx >>= 1;
			ull new_min = max(data[idx<<1], data[idx<<1|1]);
         if (new_min == data[idx]) break;
         data[idx] = new_min;

		}
	}

	ull Range_Max(ull left, ull right)          // interval [left, right).
	{
		//int result = numeric_limits<int>::max();   // set minimum to infinity.
		left += n;                                   // both left & right index+1.
		right += n;

		ull result = data[left];
		while (left < right)
      {
			if (left & 1)  result = max(result, data[left++]);
			if (right & 1) result = max(result, data[--right]);
			left >>= 1;
			right >>= 1;
		}
		return result;
	}
};
//***************************************************************************
int main()
{
   unsigned int T=0;         //T denoting the number of test cases.
   cin>>T;
   if(1 <= T && T<=10)
   {
      for(unsigned int queri=0; queri<T; ++queri)
      {
         unsigned int N=0; //each test case contains a single integer N.
         cin>>N;
         if(1 <= N && N<= 700)
         {
            SegmentTree st_max(N*N);
            ull Max_Ni=0, Sum=0, Max_pre=0, temp=0;;
            bool possible=true;

            for(ull i=0; i<(N*N); ++i)
            {
               cin>>temp;
               st_max.updateST(i,temp);
            }

            //for (ull i = 0; i < (N*N); i++)
               //cout << i << ": " << st_max.Range_Max(i, i+1) << endl;

            for(ull i=0; i<(N*N); i=i+N)
            {
               Max_Ni=st_max.Range_Max(i, i+N);
               //cout<<Max_Ni<<endl;
               if(Max_Ni>Max_pre)
               {
                  Sum+=Max_Ni;
                  Max_pre=Max_Ni;
               }
               else
               {
                  possible=false;
                  break;
               }
            }
            (possible) ? cout<<Sum<<endl: cout<<-1<<endl;
         }
      }
   }
   return 0;
}

// vector approach failed due to time limit
/*vector<ull> vec(N*N);
vector<ull>::iterator itr=vec.begin();
for( ;itr!=vec.end(); ++itr)
   cin>>*itr;

ull Max_Ni=0, Sum=0, Max_pre=0;
bool possible=true;
for(unsigned int i=0; i<vec.size(); i=i+N)
{
   Max_Ni=*max_element(vec.begin()+i, vec.begin()+i+N);
   if(Max_Ni>Max_pre)
   {
      Sum+=Max_Ni;
      Max_pre=Max_Ni;
   }
   else
   {
      possible=false;
      break;
   }
}
(possible) ? cout<<Sum<<endl: cout<<-1<<endl; */
