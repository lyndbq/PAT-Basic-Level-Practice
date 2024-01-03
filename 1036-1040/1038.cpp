#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, x, H[101] = {0};
    cin >> N;
    
    for(int i=0; i<N; i++){
        cin >> x;
        H[x]++;
    }
    cin >> N;
    for(int i=0; i<N-1; i++){
        cin >> x;
        cout << H[x] << " ";
    }
    cin >> x;
    cout << H[x] << endl;
}