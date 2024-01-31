#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, M, x, ans;
    cin >> N >> M;

    vector<int> F(M), Z(M);
    for(int i=0; i<M; i++)
        cin >> F[i];
    for(int i=0; i<M; i++)
        cin >> Z[i];
    for(int i=0; i<N; i++){
        ans = 0;
        for(int j=0; j<M; j++){
            cin >> x;
            if(x == Z[j])
                ans += F[j];
        }
        cout << ans << endl;
    }
}