#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> A(N), B(N);
    int A_MIN = 1e9, B_MAX = 0;

    for(int i=0; i<N; i++){
        cin >> A[i];
        A_MIN = min(A_MIN, A[i]);
    }
    for(int i=0; i<N; i++){
        cin >> B[i];
        B_MAX = max(B_MAX, B[i]);
    }

    if(A_MIN - B_MAX >=  1){
        cout << "Yes" << " " << A_MIN - B_MAX;
    }else{
        cout << "No" << " " << B_MAX - A_MIN + 1;
    }
    
}