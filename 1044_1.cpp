#include<bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    vector<string> H = {"tret","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"},
            K = {"tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
    getline(cin, S);        

    for(int i=0; i<169; i++){    
        // cout << i << " ";
        int L = i;
        if(L / 13 > 0){
            cout << K[L/13-1];
            L %= 13;
            if(L != 0)
                cout << " " <<  H[L] << endl;
            else
                cout << endl;
        }else
            cout << H[L] << endl;
    }
}