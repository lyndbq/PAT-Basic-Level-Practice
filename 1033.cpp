#include<bits/stdc++.h>
using namespace std;

int main()
{
    string A, B;
    cin >> A >> B;
    if(B.size() == 0)
        swap(A, B);
    vector<bool> H(300, true);

    for(int i=0; i<A.size(); i++){
        H[A[i]] = false;
        if(A[i] >= 'A' && A[i] <= 'Z')
            H[A[i]+32] = false;
    }
    for(int i=0; i<B.size(); i++){
        if(H[B[i]]){
            if(B[i] >= 'A' && B[i] <= 'Z' && !H['+']){
                continue;
            }else
                cout << B[i];
        }
    }
}