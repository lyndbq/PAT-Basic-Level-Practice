#include<bits/stdc++.h>
using namespace std;

// 14

bool solve()
{
    int K;
    cin >> K;
    unordered_set<int> H;
    for(int i=1; i<=K; i++){
        if(K % i == 0){
            H.insert(i);
        }
    }
    vector<int> L;
    int ans = 0;
    for(auto i : H)
        L.push_back(i);
    sort(L.begin(), L.end());
    
    for(int i=0; i<L.size(); i++){
        for(int j=i+1; j<L.size(); j++){
            for(int k=j+1; k<L.size(); k++){
                for(int s=k+1; s<L.size(); s++){
                    if((L[i] + L[j] + L[k] + L[s]) % K == 0)
                        return true;
                }
            }
        }
    }
    return false;
}

int main()
{
    int N;
    cin >> N;
    while(N--){
        if(solve())
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}