// 4分钟

#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> K;
    int N, SUM = 0;
    cin >> N;
    vector<int> H(N);
    for(int i=0; i<N; i++)
        cin >> H[i];
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(i != j)
                K.insert(H[i]*10+H[j]);
        }
    }
    for(auto i : K){
        SUM += i;
 
    }
    cout << SUM;
}