#include<bits/stdc++.h>
using namespace std;

int h[2][10000+5];

int main()
{
    string s, p;
    cin >> s >> p;

    int MIN = 1e9, k = 0;
    for(int i=1; i<=p.size(); i++){
        for(int j=1; j<=s.size(); j++){
            if(p[i-1] == s[j-1]){
                if(h[!k][j-1] != 0 || i == 1)
                    h[k][j] = h[!k][j-1] + 1; 
            }else
                if(h[k][j-1] != 0)
                    h[k][j] = h[k][j-1] + 1;
            // cout << h[k][j] << " ";
            h[!k][j-1] = 0;
        }
        // cout << endl;
        k = !k;
    }
    // for(int i=1; i<=s.size(); i++){
    //     if(p[0] == s[i-1])
    //         h[0][i] = 1;
    //     else
    //         if(h[0][i-1] != 0)
    //             h[0][i] = h[1][i-1] + 1;
    //     // cout << h[1][i] << " ";
    // }
    // // cout << endl;
    // for(int i=2; i<=p.size(); i++){
    //     for(int j=1; j<=s.size(); j++){
    //         if(p[i-1] == s[j-1]){
    //             if(h[i-1][j-1] != 0)
    //                 h[i][j] = h[i-1][j-1] + 1;
    //         }else
    //             if(h[i][j-1] != 0)
    //                 h[i][j] = h[i][j-1] + 1;
    //         // cout << h[i][j] << " ";
    //     }
    //     // cout << endl;
    // }
    k = !k;
    for(int i=1; i<=s.size(); i++){
        if(p.back() == s[i-1] && h[k][i] != 0)
            MIN = min(MIN, h[k][i]);
    }
    string l;
    for(int i=1; i<=s.size(); i++){
        if(p.back() == s[i-1] && h[k][i] == MIN){
            int a = h[k][i];
            while(a--){
                l = s[--i] + l;
            }
            break;
        }
    }
    cout << l;
    
}