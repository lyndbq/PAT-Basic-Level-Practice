#include<bits/stdc++.h>
using namespace std;

// 10 15

void solve()
{
    int N;
    cin >> N;
    int s = 1;
    while(N / s != 0){
        s *= 10;
    }
    long long k = N * N;
    for(int i=1; i<10; i++){
        long long ans = i * k;
        if(ans % s == N){
            cout << i << " " << ans << endl;
            return ;
        }
    }
    cout << "No" << endl;
}

int main()
{
    int N;
    cin >> N;
    while (N--)
    {
        solve();
    }
}