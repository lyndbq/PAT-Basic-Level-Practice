#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    string x, y;
    cin >> N;
    unordered_map<string, int> H;
    vector<int> L;
    for(int i=0; i<N; i++){
        cin >> x >> y;
        H[x] = i;
        H[y] = i;
        L.push_back(2);
    }

    int M;
    cin >> M;
    vector<string> K;
    vector<string> S(M);
    for(int i=0; i<M; i++){
        cin >> S[i];
        if(!H.count(S[i]))
            K.push_back(S[i]);
        else
            L[H[S[i]]]--;
    }

    for(auto i : S){
        if(H.count(i) && L[H[i]] != 0)
            K.push_back(i);
    }

    sort(K.begin(), K.end());
    cout << K.size() << endl;
    if(K.size() == 0)
        return 0;
    for(int i=0; i<K.size()-1; i++)
        cout << K[i] << " ";

    cout << K.back() << endl;
}