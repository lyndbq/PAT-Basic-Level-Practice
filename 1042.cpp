#include<bits/stdc++.h>
using namespace std;

int main()
{
    int MAX = 0;
    string S;
    getline(cin,S);
    int H[300] = {0};

    for(int i=0; i<S.size(); i++){
        if(S[i] >= 'A' && S[i] <= 'Z')
            S[i] += 32;
        H[S[i]]++;
        if((S[i] >= 'a' && S[i] <= 'z') || (S[i] >= 'A' && S[i] <= 'Z'))
            MAX = max(MAX, H[S[i]]);
    }
    
    for(int i='a'; i<='z'; i++)
        if(H[i] == MAX){
            cout << (char)i << " " << H[i] << endl;
            return 0;
        }
}