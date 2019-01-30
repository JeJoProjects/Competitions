#include <bits/stdc++.h>

#define ll long long
#define fr freopen("in.txt","r",stdin)
#define rep(i,n) for(int i=0;i<n;i++)
#define frep(i,n) for(int i=1;i<=n;i++)
#define pi pair<int,int>
#define f first
#define s second
#define MAXBITS 15
ll H[1011][1011];
ll V[1011][1011];
ll dp[1011][1011];
int main() {
    int N;
    std::cin >> N;
    ll ans = 0;
    ll sum = 0;
    frep(i,N) {
        frep(j,N) {
            std::cin >> H[i][j];
        }
    }
    frep(i,N) {
        frep(j,N) {
            std::cin >> V[i][j];
            sum += V[i][j];
        }
    }
    frep(i,N) {
        ll s = 0;
        ll maxval = 0;
        for(int j=N;j>=1;j--) {
            s+=H[i][j]-V[i][j];
            maxval = max(maxval,dp[i-1][j]);
            dp[i][j] = maxval+s;
        }
    }
    ans = sum;
    frep(j,N) {
        ans = max(ans,sum+dp[N][j]);
    }
    std::cout << ans;
}
