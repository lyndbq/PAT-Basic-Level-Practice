#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int> K,L;
    int a, b;
    cin >> a >> b;
    K.insert(a);
    K.insert(b);
    int N, M;
    cin >> N >> M;
    vector<vector<int> > H(N, vector<int>(M));
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            cin >> H[i][j];
    
    int s;
    bool ok;
    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            s = H[j][i];
            ok = true;
            if(L.count(j))
                continue;
            if(!K.count(s))
            for(auto k : K)
                if(K.count(k+s)){
                    K.insert(s);   
                    ok = false;
                    break;
                }
            if(ok){
                cout << "Round #" << i+1 << ": " << j+1 << " is out." << endl;
                L.insert(j);
            }
        }
    }
    cout << "Winner(s): ";
    vector<int> T;
    for(int i=1; i<=N; i++)
        if(!L.count(i-1))
            T.push_back(i);
    for(int i=0; i<T.size()-1; i++)
        cout << T[i] << " ";
    cout << T.back();
}