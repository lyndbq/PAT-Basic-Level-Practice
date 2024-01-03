#include<bits/stdc++.h>
using namespace std;

vector<int> A, B, H;

int main()
{
    int N, i, j, k, x, ok = false;
    cin >> N;

    A.resize(N);
    B.resize(N);
    H.resize(N);

    for(int i=0; i<N; i++)
        cin >> A[i];
    for(int i=0; i<N; i++)
        cin >> B[i];

    for(i=1; i<N; i++){
        x = A[i];
        for(j=i; j>0; j--){
            A[j] = A[j-1];
            if(x >= A[j]){
                A[j] = x;
                break;    
            }
        }
        if(j == 0)
            A[0] = x;
        if(ok){
            cout << "Insertion Sort" << endl;
            for(j=0; j<N-1; j++)
                cout << A[j] << " ";
            cout << A.back();
            return 0;
        }
        for(k=0; k<N; k++){
            if(A[k] != B[k])
                break;
        }
        if(k == N)
            ok = true;
    }

    cout << "Merge Sort" << endl;

    for(i=2; i<=N; i*=2){
        for(j=0; j<N; j+=i){
            for(k=j+1; k<j+i && k < N; k++){
                if(B[k] < B[k-1]){
                    ok = true;
                    break;
                }
            }
            if(ok)
                break;
        }
        if(ok){
            for(j=0; j+i-1<N; j+=i)
                sort(B.begin()+j, B.begin()+j+i);
            sort(B.begin()+j, B.end());
            for(k=0; k<N-1; k++)
                cout << B[k] << " ";
                cout << B.back() << endl;
                return 0;
        }
    }
}