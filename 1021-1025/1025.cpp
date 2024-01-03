#include<bits/stdc++.h>
using namespace std;

int main()
{
    string S, x, b;
    int N, K, a;
    cin >> S >> N >> K;
    map<string, pair<int,string> > H;
    vector<pair<int,string> > L;

    for(int i=0; i<N; i++){
        cin >> x >> a >> b;
        H[x].first = a;
        H[x].second = b;
    }

    while(S != "-1"){
        L.push_back({H[S].first, S});
        S = H[S].second;
    }

    if(K != 0){
        for(int i=0; i+K-1<L.size(); i+=K){
            int l = i, r = i+K-1;
            while(l < r)
                swap(L[l++], L[r--]);
        }
    }
    for(int i=0; i<L.size()-1; i++)
        cout << L[i].second << " " << L[i].first << " " << L[i+1].second << endl;
    cout << L.back().second << " " << L.back().first << " " << -1 << endl;
}