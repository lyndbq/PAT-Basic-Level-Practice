#include<bits/stdc++.h>
using namespace std;

int main()
{
    string L;
    int N, K;
    cin >> L >> N >> K;
    unordered_map<string, pair<string,string> > H;
    string a, b, c;
    for(int i=0; i<N; i++){
        cin >>a >> b >> c;
        H[a] = {b,c};
    }
    vector<pair<string,string> > S, T;

    while(1){
        if(L == "-1")
            break;
        S.push_back({L, H[L].first});
        L = H[L].second;
    }

    int x = S.size() - S.size() % K;
    while(x >= 0){
        for(int i=0; i<K && x+i < S.size(); i++)
            T.push_back(S[x+i]);
        x -= K;
    }
    cout << endl;
    for(int i=0; i<T.size()-1; i++)
        cout << T[i].first << " " << T[i].second << " " << T[i+1].first << endl;
    cout << T.back().first << " " << T.back().second << " " << -1 << endl;
}