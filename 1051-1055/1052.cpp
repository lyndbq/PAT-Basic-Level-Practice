// 本题第二第三测试点未通过

#include<bits/stdc++.h>
using namespace std;

vector<string> sx(string x)
{
    vector<string> k;
    int l = 0;
    for(int i=0; i<x.size(); i++){
        if(x[i] == '[')
            l = i;
        else if(x[i] == ']')
            k.push_back(x.substr(l+1,i-l-1));
    }
    return k;
}

int main()
{
    string A, B, C;
    getline(cin, A);
    getline(cin, B);
    getline(cin, C);

    vector<string> a = sx(A), b = sx(B), c = sx(C);

    int k;
    cin >> k;
    
    int x = a.size(), y = b.size(), z = c.size();
    int h[5];
    while(k--){
        for(int i=0; i<5; i++){
            cin >> h[i];
            h[i]--;
        }
        if(h[0] >= x || h[1] >= y || h[2] >= z || h[3] >= y || h[4] >= x){
            cout << "Are you kidding me? @\\/@" << endl;
        }else
            cout << a[h[0]] << "(" << b[h[1]] << c[h[2]] << b[h[3]] << ")" << a[h[4]] << endl;
        
    }
}