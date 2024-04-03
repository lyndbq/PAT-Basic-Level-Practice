#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int k, m;
    cin >> k >> m;
    cout << "Case 1\n";
    for(int i=1; i<m; i+=9){
        int s = __gcd(i, m);
        if(s <= 2)
            continue;
        bool ok = true;
        for(int j=2; j<=sqrt(s); j++){
            if(s % j == 0)
                ok = false;
        }
        if(!ok)
            continue;
        
    }
}

int main()
{
    int N;
    while(N--){
        solve();
    }
}