#include<bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    int B;
    cin >> S >> B;

    int i = 0, K = 0;

    if(S[i]-'0' < B){
        K = S[i]-'0';
        i++;
    }

    for(; i<S.size(); i++){
        K *= 10;
        K += S[i]-'0';
        if(K < B){
            cout << 0;
            continue;
        }else{
            cout << K/B;
            K %= B;
        }
    }
    if(S.size() == 1 && S[i]-'0' < B)
        cout << 0;
    cout << " " <<  K;
}