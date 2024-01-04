// 45

#include<bits/stdc++.h>
using namespace std;

struct node{
    int a,b,c,d = 0;
};

bool cmp(pair<int,int> x, pair<int,int> y)
{
    if(x.second != y.second)
        return x.second > y.second;
    else
        return x.first < y.first;
}

int main()
{
    int N, M;
    cin >> N >> M;
    vector<struct node> H(M);
    vector<pair<int,int> > L(M);
    int K[5] = {1,2,4,8,16};
    for(int i=0; i<M; i++){
        L[i].first = i+1;
        L[i].second = 0;
        cin >> H[i].a >> H[i].b >> H[i].c;
        char x;
        for(int j=0; j<H[i].c; j++){
            cin >> x;
            H[i].d += K[x-'a'];
        }
    }
    int n, l, i, j, ans,b;
    string s1, s;
    getline(cin, s1);
    for(i=0; i<N; i++){
        s.clear();
        getline(cin, s1);
        for(auto i : s1){
            if(i == ' ' || i == '(' || i == ')')
                continue;
            else
                s += i;
        }
        b = ans = j = 0;
        while(j < s.size()){
            l = 0;
            n = s[j++]-'0';
            for(int k=0; k<n; k++, j++){
                l += K[s[j]-'a'];
            }
            if(l != H[b].d || n != H[b].c){
                L[b].second++;
            }else
                ans += H[b].a;
            b++;
        }
        cout << ans << endl;
    }
    sort(L.begin(),L.end(), cmp);

    if(L[0].second == 0)
        cout << "Too simple";
    else{
        cout << L[0].second << " ";
        for(i=0; i<L.size(); i++){
            if(L[i].second == L[0].second)
                cout << L[i].first;
            if(i+1 != L.size() && L[i+1].second == L[0].second)
                cout << " ";
        }
    }
}