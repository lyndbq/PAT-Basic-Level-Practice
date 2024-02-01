#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, T, MAX = 0;
    bool ok = false, s = false;
    cin >> N >> T;
    vector<int> H(N);
    for(int i=0; i<N; i++)
        cin >> H[i];
    H.push_back(0);
    for(int i=0; i<=N; i++){
        MAX = max(MAX, H[i]);
        if(!ok){
            if(H[i] > T){
                cout << "[" << i <<", ";
                ok = true;
            }
        }else{
            if(H[i] <= T){
                cout << i-1 <<"]" << endl;
                ok = false;
                s = true;
            }
        }
    }
    if(!s){
        cout << MAX << endl;
    }
}