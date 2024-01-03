#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int > x, pair<string, int > y)
{
    if(x.second != y.second)
        return x.second < y.second;
    else    
        return x.first > y.first;
}

int main()
{
    string s;
    int N, K, x;
    cin >> N >> K;
    vector<string> L[K];
    vector<pair<string, int > > H;
    for(int i=0; i<N; i++){
        cin >> s >> x;
        H.push_back({s,x});
    }
    sort(H.begin(), H.end(), cmp);



    for(int i=0, j = 0; i<K; i++){
        if(i != K-1)
            L[i].resize(floor(N/K));
        else
            L[i].resize(H.size()-j);
        int l = 0, r = L[i].size()-1;
        if(L[i].size() % 2 == 0)
            L[i][l++] = H[j++].first;
        while(l < r){
            L[i][r--] = H[j++].first;
            L[i][l++] = H[j++].first;
        }
        if(l == r)
            L[i][l] = H[j++].first;
    }
    for(int i=K-1; i>=0; i--){
        for(int j=0; j<L[i].size()-1; j++)
            cout << L[i][j] << " ";
        cout << L[i].back() << endl;
    }
}