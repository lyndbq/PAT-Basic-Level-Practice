#include<bits/stdc++.h>
using namespace std;

int main()
{
    string A, B;
    cin >> A >> B;
    vector<bool> H(200,false), K(200, false);
    

    for(int i=0; i<B.size(); i++)
        H[B[i]] = true;
    
    for(int i=0, x; i<A.size(); i++){
        if(!H[A[i]]){
            if(A[i] >= 'a' && A[i] <= 'z')
                x = A[i] - 32;
            else
                x = A[i];
            
            if(!K[x]){
                cout << (char)x;
                K[x] = true;
            }
        }
    }
}