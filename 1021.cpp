#include<bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int H[10] = {0};

    for(int i=0; i<S.size(); i++)
        H[S[i]-'0']++;

    for(int i=0; i<10; i++){
        if(H[i])
            cout << i <<":" << H[i] << endl;
    }

}   