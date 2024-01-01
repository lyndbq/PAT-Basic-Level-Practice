#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    string S;
    vector<string> H = {"tret","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"},
            K = {"tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
    getline(cin, S);        

    for(int i=0; i<N; i++){    
        getline(cin, S);
        if(S[0] >= 'a' && S[0] <= 'z'){
            if(S == "tret")
                cout << 0 << endl;
            else if(S.size() == 3){
                if(find(H.begin(), H.end(), S) - H.begin() == 13)
                    cout << (find(K.begin(), K.end(), S) - K.begin() + 1) * 13<< endl;
                else
                    cout << find(H.begin(), H.end(), S) - H.begin() << endl;
            }else{
                cout << (find(K.begin() ,K.end(), S.substr(0, 3)) - K.begin() + 1) * 13 
                        + (find(H.begin(), H.end(), S.substr(4,3)) - H.begin()) << endl;
            }
        }else{
            int L = stoi(S);
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
}