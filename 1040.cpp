#include<bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    vector<int> P, T, A;
    cin >> S;
    for(int i=0; i<S.size(); i++){
        if(S[i] == 'P')
            P.push_back(i);
        else if(S[i] == 'T')
            T.push_back(i);
        else
            A.push_back(i);
    }
    long long ans = 0, mod = 1000000007;
    for(int i=0; i<P.size(); i++){
        for(int j=upper_bound(A.begin(), A.end(), P[i])-A.begin(); j<A.size(); j++){
            ans += upper_bound(T.begin(), T.end(), A[j]) - T.begin() +;
            ans %= mod;    
        }
    }

    cout << ans % mod;
}