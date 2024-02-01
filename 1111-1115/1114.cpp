#include<bits/stdc++.h>
using namespace std;

bool K[100000000];

int main()
{
    bool ok = true, l = true;
    int k;
    string s;
    cin >> s;
    while(!s.empty()){
        ok = true;
        k = stoi(s);
        if(k == 1){
            ok = l = false;
            cout << s << " No" << endl;
        }
        for(int i=2; i<sqrt(k); i++)    
            if(k % i == 0){
                cout << s << " No" << endl;
                ok = false;
                l = false;
                break;
            }
        if(ok)
            cout << s << " Yes" << endl;
        s = s.substr(1);
    }
    if(l)
        cout << "All Prime!";
}