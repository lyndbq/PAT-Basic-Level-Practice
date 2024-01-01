#include<bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    long long H[3] = {0}, mod = 1000000007;

    for(int i=0; i<S.size(); i++){
        if(S[i] == 'P')
            H[0]++;
        else if(S[i] == 'A' && H[0])
            H[1] += H[0];
        else{
            H[2] += H[1];
        }
        H[0] %= mod;
        H[1] %= mod;
        H[2] %= mod;
    }   
    cout << H[2] % mod;
}