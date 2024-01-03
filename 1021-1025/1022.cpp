#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, D;
    cin >> A >> B >> D;

    A += B;
    vector<int> K;
    if(A == 0)  
        cout << 0;
    while(A != 0){
        K.push_back(A%D);
        A /= D;
    }

    for(int i=K.size()-1; i>=0; i--)
        cout << K[i];
    
}