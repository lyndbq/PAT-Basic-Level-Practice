#include<bits/stdc++.h>
using namespace std;

// 38 15

string jw(int i, int D, string s)
{
    int k = 1;
    for(int j=i+D; j>=0; j--){
        if(j == i)
            continue;
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
    int N, D, x, i, l;
    string s;
    double k;
    cin >> N >> D;
    while(N--){
        cin >> x >> s;

        for(i=0; i<s.size(); i++)
            if(s[i] == '.')
                break;
        if(i == s.size()){
            cout << s << '.';
            for(int j=0; j<D; j++)
                cout << "0";    
            cout << endl;
            continue;
        }
        if(s.size() - i - 1 <= D){
            cout << s;
            for(int j=s.size()-i-1; j<D; j++){
                cout << "0";
            }
            cout << endl;
            continue;
        }
        if(x == 1){
            l = s[i+D+1] - '0';
            if(l >= 5){
                s = jw(i,D,s);    
            }
            cout << s.substr(0, D+i+1);
        }else if(x == 2){
            cout << s.substr(0, D+i+1);
        }else{
            l = s[i+D+1] - '0';
            if(l > 5){
                s = jw(i,D,s);  
            }else if(l == 5){
                int a = 0;
                for(int j=i+D+2; j<s.size(); j++){
                    if(s[j] != '0')
                        a++;
                }
                if(a != 0){
                    s = jw(i,D,s);  
                }else{
                    if((s[i+D]-'0')%2){
                        s = jw(i,D,s);  
                    }
                }
            }
            cout << s.substr(0, D+i+1);
        }
        cout << endl;
    }
}