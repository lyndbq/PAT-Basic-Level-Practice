#include<bits/stdc++.h>
using namespace std;

int main()
{
    char L[13];
    int j, i, k;
    string A, B, H, S;
    cin >> A >> B;
    if(A.size() > B.size()){
        for(int i=B.size(); i<A.size(); i++)
            B = '0' + B;
    }
    for(int i=0; i<=9; i++)
        L[i] = '0' + i;
    L[10] = 'J';
    L[11] = 'Q';
    L[12] = 'K';

    for(i=A.size()-1, j=B.size()-1, k=1; i >= 0 && j >= 0; i--, j--, k++){
        if(k % 2){
            H = L[(A[i]-'0'+B[j]-'0') % 13] + H;
        }else{
            int x = B[j]-'0' - (A[i]-'0');
            if(x < 0)
                x += 10;
            H = to_string(x) + H;
        }
    }
    while(i >= 0)
        H = A[i--] + H;
    while(j >= 0)
        H = B[j--] + H;
    cout << H;
}