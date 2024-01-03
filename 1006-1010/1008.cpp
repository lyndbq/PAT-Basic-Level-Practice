#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, M, i;
    cin >> N >> M;
    vector<int> H(N);
    for(int i=0; i<N; i++)
        cin >> H[i];

    M %= N; 

    for(i=N-M; i<N; i++)
        cout << H[i] << " ";
    for(int i=0; i<N-M-1; i++)
        cout << H[i] << " ";
    cout << H[N-M-1] << endl;
}