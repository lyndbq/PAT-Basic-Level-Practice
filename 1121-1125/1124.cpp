#include<bits/stdc++.h>
using namespace std;

// 8

int main()
{
    long long N;
    cin >> N;
    vector<long long> H(48, 0);
    H[1] = 1;
    for(int i=2; i<H.size(); i++){
        H[i] = H[i-1] + H[i-2];
    }
    int k = lower_bound(H.begin(), H.end(), N) - H.begin();
    if(H[k] == N || k == 0)
        cout << N;
    else{
        if(abs(N-H[k]) >= abs(N-H[k-1]))
            cout << H[k-1];
        else
            cout << H[k];
    }

}