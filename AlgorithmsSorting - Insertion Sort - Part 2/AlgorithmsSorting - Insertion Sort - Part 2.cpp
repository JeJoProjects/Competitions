#include <iostream>
#include <vector>
#include <algorithm>


// basic implementation
void insertionSort(unsigned int _size, std::vector<int> vec)
{
	for(unsigned i=1;i<_size; ++i)
   {
		int val = vec[i];
		unsigned int hole = i;
		while(hole > 0 && (vec[hole-1] >  val))
		{
			vec[hole] = vec[hole-1];
			--hole;
		}
		vec[hole] = val;
   for(unsigned int i=0; i<_size; ++i)
      std::cout<<vec[i]<<" ";
   std::cout<<std::endl;
	}
}
// std::vector one : prints the array only when changes happened to it
/*void print_values(std::vector<int> vec)
{
   for(unsigned int i=0; i<vec.size(); ++i)
      std::cout<<vec[i]<<" ";
   std::cout<<std::endl;
}
void insertionSort(std::vector<int> values)
{
    print_values(values);

    while(true)
    {
        auto what = std::adjacent_find(values.begin(), values.end(), std::greater<int>());
        if(what == values.end())
        {
            return;
        }

        auto last = what+1;
        auto v = *last;
        auto tmp = *last;

        auto where = std::lower_bound(values.begin(), what, v);
        for(auto x = last; x != where; --x)
        {
            auto prev = x-1;
            *x = *prev;
        }
        *where = tmp;
        print_values(values);
    }
}*/

int main()
{
   unsigned int arr_size;
   std::cin >> arr_size;

   std::vector <int>  arr(arr_size);
   for(unsigned int arr_val=0; arr_val<arr_size; ++arr_val)
      std::cin>>arr[arr_val];

    insertionSort(arr_size, arr);
    //insertionSort( arr);  // for second function
    return 0;
}
