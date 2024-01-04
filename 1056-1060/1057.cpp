// 6
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int SUM = 0;
    for(auto i : s){
        if(i >= 'A' && i <= 'Z')
            SUM += i-'A'+1;
        if(i >= 'a' && i <= 'z'){
            SUM += i-'a'+1;
        }
    }
    int x = 0, y = 0;

    while(SUM){
        if(SUM & 1)
            y++;
        else
            x++;
        SUM = SUM >> 1;
    }
    cout << x << " " << y << endl;
}