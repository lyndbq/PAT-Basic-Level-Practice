#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,M;
    cin >> N >> M;
    vector<int> H(N+1,0);
    for(int i=1; i<=N; i++)
        cin >> H[i];
    for(int i=1; i<=N; i++)
        H[i] += H[i-1];
    int ans = 0, l , r, m, k;
    for(int i=1; i<=N; i++){
        l = i, r = N, k = 0;
        while(l <= r){
            m = (l + r) >> 1;
            if(H[m] - H[i-1] <= M){
                k = m;
                l = m + 1;
            }else
                r = m - 1;
        }
        if(k != 0)
            ans += k - i + 1;
    }
    cout << ans;
}