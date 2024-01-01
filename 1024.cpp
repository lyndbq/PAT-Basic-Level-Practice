#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, H;
    string S, K;
    cin >> S;

    for(i=0; i<S.size(); i++){
        if(S[i] != 'E'){
            if(S[i] != '.')
                K += S[i];
        }else
            break;
    }
    i++;
    H = stoi(S.substr(i));
    
    if(K[0] == '-')
        cout << '-';

    if(S[i] == '-'){
        cout << "0.";
        H++;
        while(H++)
            cout << 0;
        for(int i=1; i<K.size(); i++)
            cout << K[i];
        
    }else{
        for(i=1; i<K.size() && i<=H+1; i++)
            cout << K[i];
        if(i < K.size()){
            cout << ".";
            for(; i<K.size(); i++)
                cout << K[i];
        }else{
            for(; i<=H+1; i++)
                cout << 0;
        }
    }
    
    
}