#include<bits/stdc++.h>
using namespace std;

// 4

int main()
{
    int N, M, MAX = 0;
    cin >> N >> M;
    vector<int> H(M), K(N);
    for(int i=0; i<N; i++){
        int k = 0;
        for(int j=0; j<M; j++){
            cin >> H[j];
            k = max(k, H[j]);    
        }
        K[i] = k;
        MAX = max(MAX, k);
    }
    for(int i=0; i<K.size()-1; i++)
        cout << K[i] << " ";
    cout << K.back() << endl << MAX << endl;
}