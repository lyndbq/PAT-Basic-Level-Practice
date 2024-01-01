#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long A,B,C;
    int N;
    cin >> N;
    for(int i=1; i<=N; i++){
        cin >> A >> B >> C;
        cout << "Case #" << i << ": ";
        if(A+B > C)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
}