#include<bits/stdc++.h>
using namespace std;
// 6

bool pd(string x)
{
    int k = x[0] - '0';
    for(int i=1; i<x.size(); i++){
        k *= 10;
        k += x[i] - '0';
        if(k % (i+1))
            return false;
    }
    return true;
}

int main()
{
    int N;
    string s;
    cin >> N;
    while(N--){
        cin >> s;
        if(pd(s)){
            cout << "Yes";
        }else
            cout << "No";
        cout << endl;
    }
}