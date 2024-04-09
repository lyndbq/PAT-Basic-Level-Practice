#include<bits/stdc++.h>
using namespace std;

// 4

int main()
{
    int A, B;
    cin >> A >> B;
    string k = to_string(A*B);
    bool ok = true;
    for(int i=k.size()-1; i>=0; i--)
        if(k[i] == '0' && ok)
            continue;
        else{
            cout << k[i];
            ok = false;    
        }
}