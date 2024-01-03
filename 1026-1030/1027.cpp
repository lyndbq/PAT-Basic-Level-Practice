#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, i;
    char X;
    cin >> N >> X;
    int K = 1, ans = 1;
    while((K+2)*2 + ans <= N){
        K += 2;
        ans += K*2;
    }

    for(i=0; i<=K/2; i++){
        for(int j=0; j<i; j++)
            cout << " ";
        for(int j=0; j<K-2*i; j++)
            cout << X;
        cout << endl;
    }

    for(i-=2; i>=0; i--){
        for(int j=0; j<i; j++)
            cout << " ";
        for(int j=0; j<K-2*i; j++)
            cout << X;
        cout << endl;
    }
    cout << N-ans;
}