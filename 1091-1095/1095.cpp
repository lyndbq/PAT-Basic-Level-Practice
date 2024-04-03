#include<bits/stdc++.h>
using namespace std;

// 35 25

vector<string> T, A, B, K;
unordered_map<string, int> H;
unordered_map<string, vector<pair<string,int> > > F;

bool cmp_1(string a, string b){
    if(H[a] != H[b])
        return H[a] > H[b];
    else
        return a < b;
}

bool cmp_2(pair<string,int> a, pair<string,int> b){
    if(a.second != b.second)
        return a.second > b.second;
    else
        return a.first < b.first;
}

void solve_1(string x)
{
    vector<string> Z;
    if(x == "A")
        Z = A;
    else if(x == "B")
        Z = B;
    else
        Z = T;
    
    for(auto i : Z)
        cout << i << " " << H[i] << endl;
    if(Z.size() == 0)
        cout << "NA" << endl;
}

void solve_2(string x)
{
    int ans = 0, sum = 0;
    for(auto i : K){
        string k = i.substr(1, 3);
        if(k == x){
            ans++;
            sum += H[i];
        }
    }
    if(ans == 0)
        cout << "NA" << endl;
    else
        cout << ans << " " << sum << endl;
}

void solve_3(string x)
{
    if(F.count(x)){
        for(auto i : F[x]){
            cout << i.first << " " << i.second << endl;
        }
        if(F[x].size() == 0)
            cout << "NA" << endl;
        return ;
    }

    unordered_map<string, int> L;
    for(auto i : K)
    {
        string k = i.substr(4, 6);
        if(k == x){
            L[i.substr(1, 3)]++;
        }
    }

    vector<pair<string,int> > Z;
    for(auto i : L){
        Z.push_back({i.first, i.second});
    } 
    sort(Z.begin(), Z.end(), cmp_2);
    for(auto i : Z){
        cout << i.first << " " << i.second << endl;
    }
    F[x] = Z; 
    if(Z.size() == 0){
        cout << "NA" << endl;   
    }
}

int main()
{
    int N, M, x;
    cin >> N >> M;
    string s;
    
    for(int i=0, x; i<N; i++){
        cin >> s >> x;
        H[s] = x;
        if(s[0] == 'T')
            T.push_back(s);
        else if(s[0] == 'A')
            A.push_back(s);
        else
            B.push_back(s);
        K.push_back(s);
    }
    sort(T.begin(), T.end(), cmp_1);
    sort(A.begin(), A.end(), cmp_1);
    sort(B.begin(), B.end(), cmp_1);

    for(int i=1; i<=M; i++){
        cin >> x >> s;
        cout << "Case " << i << ": " << x << " " << s << endl;
        if(x == 1){
            solve_1(s);
        }else if(x == 2){
            solve_2(s);
        }else
            solve_3(s);
    }
}