#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> H(N+2, 1);

    for(int i=2; i<=sqrt(N); i++){
        if(H[i])
            for(int j=i*i; j<=N; j+=i)
                H[j] = 0;
    }

    int ans = 0, K = 2;
    for(int i=3; i<=N; i++){
        if(H[i]){
            if(i - K == 2)
                ans++;
            
            K = i;    
        }
    }
    cout << ans << endl;
}