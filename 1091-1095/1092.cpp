#include<bits/stdc++.h>
using namespace std;

// 9 20

int main()
{
    int N, M, MAX = 0;
    vector<int> H(N, 0);

    for(int i=0, x; i<M; i++){
        for(int j=0; j<N; j++){
            cin >> x;
            H[j] += x;
            MAX = max(MAX, H[j]);
        }
    }
    vector<int> ans;

    for(int i=0; i<N; i++){
        if(H[i] == MAX)
            ans.push_back(i+1);
    }

    cout << MAX << endl;
    for(int i=0; i<ans.size()-1; i++)
        cout << ans[i] << " ";
    cout << ans.back();
}