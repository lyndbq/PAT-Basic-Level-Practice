#include<bits/stdc++.h>
using namespace std;

// https://blog.csdn.net/qq_64153207/article/details/122821560
// 25

vector<vector<string> > H(26, vector<string>(7));

void sc(string s)
{
    // vector<vector<string> > K(7, vector<int>(s.size()*5+))
    for(int i=0; i<7; i++){
        for(int j=0; j<s.size()-1; j++){
            cout << H[s[j]-'A'][i] << " ";
        }
        cout << H[s.back()-'A'][i] <<  endl;
    }
    
}

int main()
{
    int i;
    
    for(i=0; i<26; i++){
        for(int j=0; j<7; j++){
            cin >> H[i][j];
        }
    }
    int k = 0;
    string s;
    bool ok = false;
    getline(cin, s);
    getline(cin, s);
    s += '[';
    for(i=0; i<s.size(); i++)
        if(s[i] < 'A' || s[i] > 'Z'){
            if(k == i){
                k = i+1;
                continue;
            }
            if(ok)
                cout << endl;
            sc(s.substr(k,i-k));
            k = i+1;
            ok = true;
        }
    // sc(s.substr(k));
}