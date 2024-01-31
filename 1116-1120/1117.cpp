#include<bits/stdc++.h>
using namespace std;

int L[10];

int ZH(int x)
{
    int k = L[x%10], ans = 0;
    x /= 10;
    while(x){
        k *= L[x%10];
        x /= 10;
    }
    while(k){
        ans += k % 10;
        k /= 10;
    }
    return ans;
}

int main()
{
    int N, M, ok;
    cin >> N >> M;
    vector<int> H;
    for(int i=N; i<=M; i++)
        H.push_back(i);
    if(M < 10){
        cout << 1 << endl;
        for(int i=0; i<H.size()-1; i++)
            cout << H[i] << " ";
        cout << H.back() << endl;
        return 0;
    }
    for(int i=0; i<10; i++)
        L[i] = i*i*i;
    
    do{
        ok = 0;
        for(int i=0; i<H.size(); i++){
            H[i] = ZH(H[i]);
            if(H[i] > 9)
                ok++;
        }
    }while(ok);
    int K[10], MAX = 0;
    memset(K, 0, sizeof(K));
    for(auto i : H){
        K[i]++;
        MAX = max(MAX, K[i]);
    }
    vector<int> S;
    cout << MAX << endl;
    for(int i=0; i<10; i++)
        if(K[i] == MAX)
            S.push_back(i);
    for(int i=0; i<S.size()-1; i++)
        cout << S[i] << " ";
    cout << S.back();
}