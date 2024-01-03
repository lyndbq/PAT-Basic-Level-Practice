#include<bits/stdc++.h>
using namespace std;

int main()
{

    int S, A = 0, B = 0, C = 0, N = 0, M = 0, H[200] = {0}, K[200] = {0};
    char x, y;
    cin >> S;
    for(int i=0; i<S; i++){
        cin >> x >> y;
        if(x == y)
            B++;
        else if((x=='C' && y=='J') || (x=='J' && y=='B') || (x=='B' && y=='C')){
            A++;
            H[x]++;
            N = max(N, H[x]);
        }
        else{
            C++;
            K[y]++;    
            M = max(M, K[y]);
        }
    }
    cout << A << " " << B << " " << C << endl;
    cout << C << " " << B << " " << A << endl;

    if(H['B'] == N)
        cout << 'B' << " ";
    else if(H['C'] == N)
        cout << 'C' << " ";
    else    
        cout << "J" << " ";

    if(K['B'] == M)
        cout << 'B' << endl;
    else if(K['C'] == M)
        cout << 'C' << endl;
    else    
        cout << "J" << endl;

}