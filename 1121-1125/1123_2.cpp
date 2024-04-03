#include<bits/stdc++.h>
using namespace std;

string jw(int i, int D, string s)
{
    int k = 1;
    for(int j=i+D; j>=0; j--){
        int a = s[j]-'0'+k;
        s[j] = a%10+'0';
        k = a / 10;
    }
    if(k == 1){
        s = '1' + s;
        i++;    
    }
    return s;
}

int main()
{
    int N, D, x, k;
    cin >> N >> D;
    string s;
    while(N--){
        cin >> x >> s;
        for(k=0; k<s.size(); k++)
            if(s[k] == '.')
                break;
        
        if(k + D >= s.size()){
            cout << s;
            for(int i=s.size(); i<=k + D; i++)
                cout << 0;
            cout << endl;
            continue;
        }

        if(x == 1){
            
        }else if(x == 2){
            cout << s.substr(0, D+k+1);
        }else{

        }
    }
}