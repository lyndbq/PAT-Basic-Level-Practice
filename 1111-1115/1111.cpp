#include<bits/stdc++.h>
using namespace std;

// 9

unordered_map<string, string> H;

void solve()
{
    string m, d, y;
    cin >> m >> d >> y;
    d = d.substr(0, d.size()-1);
    while(y.size() < 4)
        y = "0" + y;
    string s = y + H[m] + (d.size() == 1 ? "0"+d : d);
    int l = 0, r = s.size()-1;
    while(l < r){
        if(s[l++] != s[r--]){
            cout << "N " << s << endl; 
            return ;
        }
    }
    cout << "Y " << s << endl;
    
}

int main()
{
    H["Jan"] = "01";
    H["Feb"] = "02";
    H["Mar"] = "03";
    H["Apr"] = "04";
    H["May"] = "05";
    H["Jun"] = "06";
    H["Jul"] = "07";
    H["Aug"] = "08";
    H["Sep"] = "09";
    H["Oct"] = "10";
    H["Nov"] = "11";
    H["Dec"] = "12";
    int N;
    cin >> N;
    while(N--){
        solve();
    }
}