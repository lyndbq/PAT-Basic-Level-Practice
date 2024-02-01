#include<bits/stdc++.h>
using namespace std;

int pds(char x)
{
    return x >= '0' && x <= '9';
}

int main()
{
    string a, b, ans;
    cin >> a >> b;
    if(a == "0" && b == "0"){
        cout << "0";
        return 0;    
    }
    if(a.size() > b.size())
        swap(a, b);
    for(int i=a.size(); i<b.size(); i++)
        a = '0' + a;
    int k = 0, x, y;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    
    for(int i=0; i<a.size(); i++){
        if(pds(a[i]))
            x = a[i] - '0';
        else
            x = a[i] - 'a' + 10;
        if(pds(b[i]))
            y = b[i] - '0';
        else
            y = b[i] - 'a' + 10;

        k = k + x + y;
        if(k % 30 <= 9)
            ans += k % 30 + '0';
        else
            ans += (k % 30 - 10) + 'a';    
        k /= 30;
    }
    if(k == 1)
        ans += '1';
    reverse(ans.begin(), ans.end());
    k = 0;
    for(; k<ans.size(); k++)
        if(ans[k] != '0')
            break;
    if(k == ans.size())
        k = ans.size()-1;
    cout << ans.substr(k);
    
}