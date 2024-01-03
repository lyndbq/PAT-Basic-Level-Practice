#include<bits/stdc++.h>
using namespace std;

int main()
{
    int M, N;
    cin >> M >> N;

    vector<bool> H(1e7, true);
    vector<int> K;
    for(int i=2; i<=1e7; i++){
        if(H[i]){
            K.push_back(i);
            for(int j=i*i; j<=1e7; j+=i)
                H[j] = false;
        }
    }
    int i, j;
    for(i=M-1, j=1; i<N-1; i++, j++){
        cout << K[i];
        if(j % 10 == 0)
            cout << endl;
        else
            cout << " ";
    }
    if(j % 10 == 9)
        cout << endl;
    cout << K[N-1];
}
