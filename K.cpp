#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, M, x, y, a, b;
    cin >> N >> M;
    vector<vector<int> > H(N+2, vector<int>(N+2, 0));
    while(M--){
        cin >> x >> y >> a >> b;
        H[x][y]++;
        H[x][b+1]--;
        H[a+1][y]--;
        H[a+1][b+1]++;
    }

    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            H[i][j] += H[i][j-1] + H[i-1][j] - H[i-1][j-1];
            cout << H[i][j] << " ";
        }
        cout << endl;
    }

}