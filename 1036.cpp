#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, K;
    char C;
    cin >> N >> C;

    K = (double)N / 2 + 0.5;

    for(int i=0; i<K; i++){
        if(i == 0 || i == K-1){
            for(int j=0; j<N; j++)
                cout << C;
        }else{
            cout << C;
            for(int j=2; j<N; j++)
                cout << " ";
            cout << C;
        }
        cout << endl;
    }
}