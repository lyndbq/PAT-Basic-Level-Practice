#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string, int> H;
    string S;
    int N, x, MAX = 0;
    cin >> N;
    while(N--){
        cin >> S >> x;
        H[S.substr(0,find(S.begin(), S.end(), '-')-S.begin())] += x;
    }
    S.clear();
    for(auto i = H.begin(); i != H.end(); i++){
        if(MAX < (*i).second){
            MAX = (*i).second;
            S = (*i).first;
        }
    }
    
    cout << S << " " << MAX << endl;
}