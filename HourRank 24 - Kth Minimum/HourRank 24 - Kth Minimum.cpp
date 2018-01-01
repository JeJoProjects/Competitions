#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// problem should be solved with a complexity of O(nlog^2(n)log(a))
vector<long int> generate_list(vector<long int> A, vector<long int> B, long int x)
{
   vector<long int> L;
   unsigned long int n=A.size(), m=B.size();
   for(unsigned long int i=0; i<min(n, m-x); ++i)
      for(unsigned long int j=(i+x); j<m; ++j)
         L.push_back(A[i]*B[j]);

   return L;
}
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   unsigned long int n, m;   //length of A & B.
   long int x;               // an integer  x.
   unsigned int k;               // element position to be searched
   cin >> n >> m >> x >> k;
   if( (2<=n && n<=200000) && (2<=m && m<=200000) && (1<=x && x<m) )
   {
      vector<long int> A(n), B(m);

      for(auto itr=A.begin(); itr!=A.end(); ++itr)
         cin>>*itr;

      for(auto itr=B.begin(); itr!=B.end(); ++itr)
         cin>>*itr;

      vector<long int> list_C=generate_list(A, B, x);
      //copy(list_C.begin(), list_C.end(), ostream_iterator<int>(cout," "));
      sort(list_C.begin(), list_C.end());
      cout<<list_C[k-1]<<endl;

   }
   return 0;
}
// Problem Tester's code
#include <bits/stdc++.h>

using namespace std;

const int N = 200001;
const int S = 2 * N + 2;

int n, m, off;
long long k;
int a[N], b[N];
int f[S];

void add(int i, int d) {
    for (; i < S; i += i & (-i)) {
        f[i] += d;
    }
}

int get(long long r) {
    int res = 0;
    for (r = min(r, S - 1LL); r > 0; r -= r & (-r)) {
        res += f[r];
    }
    return res;
}

long long div_down(long long x, long long y) {
    if (y < 0) {
        x = -x;
        y = -y;
    }
    if (x >= 0) {
        return x / y;
    } else {
        return x / y - (x % y != 0);
    }
}

long long div_up(long long x, long long y) {
    if (y < 0) {
        x = -x;
        y = -y;
    }
    if (x >= 0) {
        return (x + y - 1) / y;
    } else {
        return x / y;
    }
}

long long count(long long x) {
    memset(f, 0, sizeof f);
    long long res = 0;
    int last = m;
    for (int i = n - 1; i >= 0; i--) {
        int pos = min(m, i + off);
        for (int j = pos; j < last; j++) {
            add(b[j] + N, 1);
        }
        last = min(last, pos);

        if (a[i] > 0) {
            res += get(div_down(x, a[i]) + N);
        } else {
            res += (m - pos) - get(div_up(x, a[i]) + N - 1);
        }
    }
    return res;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m >> off >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    long long left = -(N * 1LL * N + 1);
    long long right = N * 1LL * N + 1;

    while (right - left > 1) {
        long long mid = (left + right) / 2;
        if (count(mid) >= k) {
            right = mid;
        } else {
            left = mid;
        }
    }

    cout << right << "\n";
    return 0;
}*/
