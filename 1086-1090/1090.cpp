#include<bits/stdc++.h>
using namespace std;

// 10

int main()
{
    int N, M;
    cin >> N >> M;
    unordered_map<string, unordered_set<string> > K;
    vector<string> H;
    string a, b;
    for(int i=0; i<N; i++)
    {
        cin >> a >> b;
        K[a].insert(b);
        K[b].insert(a);
    }
    int n;
    while(M--){
        cin >> n;
        H.clear();
        H.resize(n);
        for(int i=0; i<n; i++)
            cin >> H[i];
        bool ok = true;
        for(int i=0; i<n; i++){
            if(!K.count(H[i])){
                continue;
            }
            for(int j=i+1; j<n; j++){
                if(K[H[i]].count(H[j])){
                    ok = false;
                    break;
                }
            }
            if(ok == false)
                break;
        }
        if(ok){
            cout << "Yes" << endl;
        }else
            cout << "No" << endl;
    }

}