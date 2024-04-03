#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<long long> H(35005);
    vector<long long> K(60000), Z(60000);
    H[0] = 0;
    K[0] = 0;
    Z[0] = 0;
    for(long long i=1; i<H.size(); i++){
        H[i] = 3 * i * i - 3 * i + 1;
    }
    
    for(long long i=1; i<K.size(); i++){
        K[i] = i*i;
        Z[i] = K[i] + K[i-1];
    }
    bool ok = true;
    if(N == 0){
        cout << 0 << " " << 1 << endl;
        N = 2;
    }
    if(N == 1)
        N++;
    for(int i=N; i<=M; i++){
        int a = lower_bound(K.begin(), K.end(), H[i]) - K.begin();
        if(K[a] != H[i])
            continue;
        int b = lower_bound(Z.begin(), Z.end(), a) - Z.begin();
        if(Z[b] != a)
            continue;
        ok = false;
        
        cout << i << " " << b << endl;
    }
    if(ok){
        cout << "No Solution" << endl;
    }


}