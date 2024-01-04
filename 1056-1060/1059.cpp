// 20

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    string x;
    cin >> N;

    vector<bool> K(1e5, true);
    for(int i=2; i<1000; i++){
        if(K[i]){
            for(int j=i*i; j<100000; j+=i)
                K[j] = false;
        }
    }

    unordered_map<string,int> H;
    unordered_set<string> L;
    for(int i=0; i<N; i++){
        cin >> x;
        H[x] = i+1;
    }
    cin >> M;
    for(int i=0; i<M; i++){
        cin >> x;
        cout << x;
        if(H.find(x) == H.end()){
            cout << ": Are you kidding?";
        }else if(L.count(x)){
            cout << ": Checked";
        }else if(H[x] == 1)
            cout << ": Mystery Award";
        else if(K[H[x]])
            cout << ": Minion";
        else
            cout << ": Chocolate";
        cout << endl;
        L.insert(x);
    }
}