#include<bits/stdc++.h>
using namespace std;

int main()
{
    string L1, L2;
    int N;
    cin >> L1 >> L2 >> N;
    unordered_map<string, pair<int, string> > K;
    vector<string> A = {"0"}, B = {"0"};

    string x,z;
    int y;

    for(int i=0; i<N; i++){
        cin >> x >> y >> z;
        K[x] = {y, z};
        // cout << x << " " << K[x].first << " " << K[x].second << endl;
    }

    while(K[L1].second != "-1"){
        A.push_back(L1);
        L1 = K[L1].second;
    }
    A.push_back(L1);
    while(K[L2].second != "-1"){
        B.push_back(L2);
        L2 = K[L2].second;
    }
    B.push_back(L2);
    if(A.size() < B.size())
        swap(A, B);

    vector<string> ans;

    int j, i;
    for(i=B.size()-1, j=1; i>=1; ){
        ans.push_back(A[j]);
        if(j % 2 == 0){
            ans.push_back(B[i]);
            i--;
        }
        j++;
    }
    while(j < A.size())
        ans.push_back(A[j++]);
    ans.push_back("-1");
    for(int i=0; i<ans.size()-1; i++){
        cout << ans[i] << " " << K[ans[i]].first << " " << ans[i+1] << endl;
    }
}