#include<bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int B = 0, N = 0, G = 0;
    G = S.back()-'0';
    if(S.size() == 2)
        N = S[0] - '0';
    if(S.size() == 3){
        B = S[0] - '0';
        N = S[1] - '0';
    }

    while(B--)
        cout << "B";
    while(N--)
        cout << "S";
    for(int i=1; i<=G; i++)
        cout << i;

}