#include<bits/stdc++.h>
using namespace std;

int N;
vector<int> H;
vector<pair<int,int> > L;

bool solve(int a, int b)
{
    vector<int> K(N+1, -1);
    bool ok = false;
    for(int i=1, k; i<=N; i++){
        if(i == a || i == b){
            ok = H[i] < 0;
        }else{
            ok = H[i] > 0;
        }
        k = abs(H[i]);

        if(K[k] == -1)
            K[k] = ok;
        else if(K[k] != ok){
            return false;
        }
    }
    vector<int> ans;
    for(int i=1; i<=N; i++)
        if(K[i] != 1)
            ans.push_back(i);

    if(ans.size() != 2)
        return false;
    if(ans[0] == a || ans[0] == b || ans[1] == a || ans[1] == b){
        L.push_back({ans[0], ans[1]});
        return true;
    }else
        return false;
}

int main()
{
    cin >> N;
    H.resize(N+1);

    for(int i=1; i<=N; i++)
        cin >> H[i];

    for(int i=1; i<=N; i++){
        for(int j=i+1; j<=N; j++){
            solve(i, j);
        }
    }
    // sort(L.begin(), L.end());
    if(L.size() == 0)
        cout << "No Solution";
    else
        cout << L.front().first << " " << L.front().second;
}