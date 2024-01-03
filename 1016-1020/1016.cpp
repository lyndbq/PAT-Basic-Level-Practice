#include<bits/stdc++.h>
using namespace std;

int main()
{
    string A, B;
    char X, Y;
    int N = 0, M = 0;
    cin >> A >> X >> B >> Y;

    for(int i=0; i<A.size(); i++)
        if(A[i] == X){
            N *= 10;
            N += X-'0';
        }

    for(int i=0; i<B.size(); i++)
        if(B[i] == Y){
            M *= 10;
            M += Y-'0';
        }

    cout << N + M;
}