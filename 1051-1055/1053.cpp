#include<bits/stdc++.h>
using namespace std;

double N, e, D, a = 0, b = 0;

void solve()
{
    double K, h, ans = 0;
    cin >> K;
    for(int i=0; i<K; i++){
        cin >> h;
        if(h < e)
            ans++;
    }
    if(ans > K / 2)
        if(K > D)
            a++;
        else   
            b++;
}

int main()
{   
    cin >> N >> e >> D;
    for(int i=0; i<N; i++)
        solve();

    printf("%.1lf%% %.1lf%%", (a/N)*100, (b/N)*100);

}