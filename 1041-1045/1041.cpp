#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int, pair<string,int> > H;
    int N, x, y;
    cin >> N;
    string s;
    for(int i=0; i<N; i++){
        cin >> s >> x >> y;
        H[x] = {s,y};
    }

    int M;
    cin >> M;
    while(M--){
        cin >> x;
        cout << H[x].first << " " << H[x].second << endl;
    }

}