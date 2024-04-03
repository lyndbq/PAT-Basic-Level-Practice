#include<bits/stdc++.h>
using namespace std;

// 12 20

bool IsPrime(long long x)
{
    if(x < 2)
        return false;
    for(int i=2; i<=sqrt(x); i++){
        if(x % i == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    int L, K;
    cin >> L >> K;
    string s;
    cin >> s;
    int l = 0, r = K-1;
    while(l + K - 1 < L){
        long long x = stoll(s.substr(l, K));
        if(IsPrime(x)){
            cout << s.substr(l, K);
            return 0;
        }
        l++;
    }
    cout << 404;
}