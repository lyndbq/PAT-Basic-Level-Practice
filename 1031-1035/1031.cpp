#include<bits/stdc++.h>
using namespace std;

int K[] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2},
    M[] = {1,0,10,9, 8, 7, 6, 5, 4, 3, 2};

bool solve()
{
    int ans = 0;
    string H;
    cin >> H;
    for(int i=0; i<17; i++){
        ans += (H[i]-'0') * K[i];
    }
    if(H.back() == 'X')
        H.back() = '0'+10;
    
    if(M[ans%11] == H.back()-'0')
        return true;
    else{
        if(H.back() == '0'+10)
            H.back() = 'X';
        cout << H << endl;
        return false;
    }
}

int main()
{
    int N;
    bool ok = true;
    cin >> N;
    while(N--)
        ok &= solve();
    if(ok)
        cout << "All passed";
}