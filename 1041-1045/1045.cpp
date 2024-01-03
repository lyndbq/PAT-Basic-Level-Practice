#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int,int> L;
    int N, a, b;
    cin >> N;
    vector<int> H(N), M(N+1, 0), cnt;
    for(int i=0; i<N; i++)
        cin >> H[i];
    vector<int> K(H);

    sort(K.begin(), K.end());
    for(int i=0; i<K.size(); i++)
        L[K[i]] = i;

    for(int i=0; i<H.size(); i++){
        if(L[H[i]] != i){
            a = L[H[i]], b = i;
            if(a > b)
                swap(a,b);
            M[a]++;
            M[b+1]--;
        }
    }
    int ans = 0;
    if(N != 0 && M[0] == 0){
        ans = 1;
        cnt.push_back(K[0]);    
    }
    for(int i=1; i<N; i++){
        M[i] += M[i-1];
        if(M[i] == 0){
            ans++;
            cnt.push_back(K[i]);
        }
    }
    
    if(ans == 0){
        cout << 0 << endl << endl;
        return 0;
    }else
        cout << ans << endl;

    for(int i=0; i<cnt.size()-1; i++)
        cout << cnt[i] << " ";
    cout << cnt.back() << endl; 


}